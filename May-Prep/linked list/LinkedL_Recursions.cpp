#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

  // Default constructor
  Node() {
    data = 0;
    next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

class LinkedList {
  public:
  Node* head;
  LinkedList() { head = NULL; }

  void append(int);
  void printList();
  bool searchList(int);
  void deleteValue(int);
  void deleteAtPosition(int);
  void insert(int, int);
  void reverse();
  Node* recursiveReverse(Node*);
  Node* kReverse(Node*, int);
};

void LinkedList::append(int data) {
  Node* newNode = new Node(data);
  if(head == NULL) {
    head = newNode;
    return;
  }
  Node* temp = head;
  while(temp->next != NULL) temp = temp->next;
  temp->next = newNode;  
}

void LinkedList::printList() {
  if(head == NULL) return;
  Node* temp = head;
  while(temp != NULL) {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

bool LinkedList::searchList(int val) {
  Node* temp = head;
  while(temp != NULL) {
    if(temp->data == val) return true;
    temp = temp->next;
  }
  return false;
}

void LinkedList::deleteValue(int val) {
  Node* temp = head;
  if(val == head->data) {
    head = head->next;
    delete temp;
    return;
  }
  while(temp->next->data != val && temp != NULL) temp = temp->next;
  Node* toDelete = temp->next;
  temp->next = toDelete->next;
  delete toDelete;
}

void LinkedList::deleteAtPosition(int pos) {
  Node* temp = head;
  if(head == NULL) return;
  if(pos == 0) {
    head = temp->next;
    delete temp;
    return;
  }
  int len = 0, index = 0;
  while(temp != NULL) {
    len++;
    temp = temp->next;
  }
  if(pos >= len) {
    cout<< "Index out of range";
    return;
  }
  temp = head;
  while(index != pos - 1) {
    temp = temp->next;
    index++;
  }
  Node* toDelete = temp->next;
  temp->next = toDelete->next;
  delete toDelete;
}

void LinkedList::insert(int data, int pos) {
  Node* newNode = new Node(data);
  if(head == NULL) head = newNode;
  Node* temp = head;
  if(pos == 0) {
    newNode->next = head;
    head = newNode;
    return;
  }
  int index = 0;
  while(index != pos-1) {
    temp = temp->next;
    index++;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void LinkedList::reverse() {
  Node* prev = NULL;
  Node* curr = head;
  Node* next = curr->next;

  while(curr != NULL) {
    curr->next = prev;
    prev = curr;
    curr = next;
    next = next->next;
  }
  head = prev;
}

Node* LinkedList::recursiveReverse(Node* head) {
  if(head == NULL || head->next == NULL) return head;

  Node* newHead = recursiveReverse(head->next);
  head->next->next = head;
  head->next = NULL;

  return newHead;
}

Node* LinkedList::kReverse(Node* head, int k) {
  Node* prev = NULL;
  Node* curr = head;
  Node* next;

  int count = 0;
  while(curr != NULL && count < k) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }
  if(next != NULL) {
    head->next = kReverse(next, k);
  }
  return prev;
}

int main() {
  LinkedList list1;
  list1.append(1);
  list1.append(2);
  list1.append(3);
  list1.append(4);
  list1.append(5);
  list1.append(6);

  list1.printList();
  list1.head = list1.kReverse(list1.head, 2);
  list1.printList();
}