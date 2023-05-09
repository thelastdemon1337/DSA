#include<iostream>
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
  Node* head;

  public :
  LinkedList() { head = NULL; }

  void appendNode(int);

  void deleteNode(int);

  void deleteNodeAtPosition(int);

  void printList();

  bool searchList(int);
};

void LinkedList::appendNode(int data) {
  Node* newNode = new Node(data);

  if(head == NULL) {
    head = newNode;
    return;
  }

  Node* temp  = head;

  while(temp->next != NULL) temp=temp->next;
  temp->next = newNode;
}

void LinkedList::printList() {
  Node* temp = head;

  while(temp != NULL) {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

void LinkedList::deleteNodeAtPosition(int pos) {
  Node* temp = head;
  int len = 0;
  // Calculating length
  while(temp != NULL){
    len++;
    temp=temp->next;
  }
  
  // Edge case : Empty list
  if(head == NULL) return;
  // Edge case : pos == 0
  if(pos==0){
    temp = head;
    head = temp->next;
    delete temp;
    return;
  }
  // Edge case : position out of range
  if(pos >= len) {
    cout<<"Index out of range!";
    return;
  }

  temp = head;
  Node* nodeToDelete;
  int i = 0;
  // get a pointer to pos - 1 postion
  while(i < pos - 1) {
    temp=temp->next;
    i++;
  }
  nodeToDelete = temp->next;
  temp->next = nodeToDelete->next;
  delete nodeToDelete;
}

void LinkedList::deleteNode(int val) {
  Node* temp = head;
  // Empty list
  if(head==NULL) return;
  // First element
  if(temp->data == val) {
    head = temp->next;
    delete temp;
    return;
  }
  // Rest of the list
  while(temp->next->data != val) temp=temp->next;
  Node* nodeToDelete = temp->next;
  temp->next = nodeToDelete->next;
  delete nodeToDelete;
}

bool LinkedList::searchList(int val) {
  Node *temp = head;
  if(head == NULL) return false;
  while(temp != NULL) {
    if(temp->data == val) return true;
    temp=temp->next;
  }
  return false;
}

int main() {
  LinkedList list1;

  list1.appendNode(1);
  list1.appendNode(2);
  list1.appendNode(3);
  list1.appendNode(4);
  list1.appendNode(5);
  list1.printList();
  // list1.deleteNodeAtPosition(0);
  // list1.printList();
  list1.deleteNode(1);
  list1.printList();
  cout<<list1.searchList(1)<<endl;
}