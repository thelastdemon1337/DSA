#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // Default constructor
  Node()
  {
    data = 0;
    next = NULL;
  }

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

class LinkedList
{
public:
  Node *head;
  LinkedList() { head = NULL; }

  void append(int);
  void appendLastKNodes(int);
  int length();
  void printList();
  bool searchList(int);
  void deleteValue(int);
  void deleteAtPosition(int);
  void insert(int, int);
  void reverse();
  Node *recursiveReverse(Node *);
  Node *kReverse(Node *, int);
  void makeCycle(int);
  bool detectCycle();
  void removeCycle();
  void intersect(LinkedList, int);
  int intersectionPoint(LinkedList);
  void mergeLists(LinkedList);
  Node *mergeListsOptimized(LinkedList);
};

void LinkedList::append(int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;
}

void LinkedList::printList()
{
  if (head == NULL)
    return;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

bool LinkedList::searchList(int val)
{
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == val)
      return true;
    temp = temp->next;
  }
  return false;
}

int LinkedList::length()
{
  Node *temp = head;
  int len = 0;

  // Calculating length
  while (temp != NULL)
  {
    temp = temp->next;
    len++;
  }
  return len;
}

void LinkedList::deleteValue(int val)
{
  Node *temp = head;
  if (val == head->data)
  {
    head = head->next;
    delete temp;
    return;
  }
  while (temp->next->data != val && temp != NULL)
    temp = temp->next;
  Node *toDelete = temp->next;
  temp->next = toDelete->next;
  delete toDelete;
}

void LinkedList::deleteAtPosition(int pos)
{
  Node *temp = head;
  if (head == NULL)
    return;
  if (pos == 0)
  {
    head = temp->next;
    delete temp;
    return;
  }
  int len = 0, index = 0;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  if (pos >= len)
  {
    cout << "Index out of range";
    return;
  }
  temp = head;
  while (index != pos - 1)
  {
    temp = temp->next;
    index++;
  }
  Node *toDelete = temp->next;
  temp->next = toDelete->next;
  delete toDelete;
}

void LinkedList::insert(int data, int pos)
{
  Node *newNode = new Node(data);
  if (head == NULL)
    head = newNode;
  Node *temp = head;
  if (pos == 0)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  int index = 0;
  while (index != pos - 1)
  {
    temp = temp->next;
    index++;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void LinkedList::reverse()
{
  Node *prev = NULL;
  Node *curr = head;
  Node *next = curr->next;

  while (curr != NULL)
  {
    curr->next = prev;
    prev = curr;
    curr = next;
    next = next->next;
  }
  head = prev;
}

Node *LinkedList::recursiveReverse(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *newHead = recursiveReverse(head->next);
  head->next->next = head;
  head->next = NULL;

  return newHead;
}

Node *LinkedList::kReverse(Node *head, int k)
{
  Node *prev = NULL;
  Node *curr = head;
  Node *next;

  // For Leetcode logic modification
  Node *temp = head;
  int checkCount = 0;
  while (temp != NULL)
  {
    checkCount++;
    temp = temp->next;
  }
  // cout<<"checkcount:"<<checkCount<<endl;
  if (checkCount < k)
    return head;
  // end leetcode

  int count = 0;
  while (curr != NULL && count < k)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }
  if (next != NULL)
  {
    head->next = kReverse(next, k);
  }
  return prev;
}

void LinkedList::makeCycle(int pos)
{
  Node *temp = head;
  Node *posistion;
  int count = 1;
  while (temp->next != NULL)
  {
    temp = temp->next;
    count++;
    if (count == pos)
      posistion = temp;
  }
  temp->next = posistion;
}

bool LinkedList::detectCycle()
{
  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
      return true;
  }
  return false;
}

void LinkedList::removeCycle()
{
  Node *slow = head;
  Node *fast = head;

  do
  {
    slow = slow->next;
    fast = fast->next->next;
  } while (slow != fast);
  fast = head;
  while (fast->next != slow->next)
  {
    fast = fast->next;
    slow = slow->next;
  }
  slow->next = NULL;
}

void LinkedList::appendLastKNodes(int k)
{
  Node *temp = head;
  Node *kptr;
  int len = length();
  // If k if greater than length
  k = k % len; // if greater than length, defaults to last length
  int i = 1, pivot = len - k;

  while (temp->next != NULL)
  {
    temp = temp->next;
    i++;
    if (i == pivot)
      kptr = temp;
  }
  temp->next = head;
  head = kptr->next;
  kptr->next = NULL;
}

void LinkedList::intersect(LinkedList l2, int pos)
{
  Node *ptr1 = head;
  Node *ptr2 = l2.head;
  if (pos > length())
    return;
  pos--;
  while (pos--)
  {
    ptr1 = ptr1->next;
  }
  while (ptr2->next != NULL)
    ptr2 = ptr2->next;
  ptr2->next = ptr1;
}

int LinkedList::intersectionPoint(LinkedList ll2)
{
  int len1 = length();
  int len2 = ll2.length();

  Node *ptr1;
  Node *ptr2;

  int d = 0;
  if (len1 > len2)
  {
    d = len1 - len2;
    ptr1 = head;
    ptr2 = ll2.head;
  }
  else
  {
    d = len2 - len1;
    ptr1 = ll2.head;
    ptr2 = head;
  }
  while (d)
  {
    ptr1 = ptr1->next;
    if (ptr1 == NULL)
      return -1;
    d--;
  }
  while (ptr1 != NULL && ptr2 != NULL)
  {
    if (ptr1 == ptr2)
      return ptr1->data;
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  return -1;
}

void LinkedList::mergeLists(LinkedList l2)
{
  Node *ptr1;
  Node *ptr2 = l2.head;

  if (head->data > ptr2->data)
  {
    ptr1 = ptr2;
    ptr2 = head;
  }
  else
  {
    ptr1 = head;
  }

  while (ptr1 != NULL && ptr2 != NULL)
  {
    Node *temp1 = ptr1->next;
    Node *temp2 = ptr2->next;
    if (ptr1->data < ptr2->data)
    {
      ptr1->next = ptr2;
      ptr2->next = temp1;
    }
    ptr1 = temp1;
    ptr2 = temp2;
  }
}

Node *LinkedList::mergeListsOptimized(LinkedList l2)
{
  Node *p1 = head;
  Node *p2 = l2.head;
  Node *dummy = new Node(-1);
  Node *p3 = dummy;

  while (p1 != NULL && p2 != NULL)
  {
    if (p1->data < p2->data)
    {
      p3->next = p1;
      p1 = p1->next;
    }
    else
    {
      p3->next = p2;
      p2 = p2->next;
    }
    p3 = p3->next;
  }
  while (p1 != NULL)
  {
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
  }
  while (p2 != NULL)
  {
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
  }
  return dummy->next;
}

int main()
{
  LinkedList list1;
  LinkedList list2;

  list1.append(1);
  list1.append(4);
  list1.append(5);
  list1.append(7);

  list2.append(2);
  list2.append(3);
  list2.append(6);

  list1.printList();
  list2.printList();
  // list1.mergeLists(list2);
  list1.head = list1.mergeListsOptimized(list2);
  list1.printList();
}