// Single linked list : Insert, Delete, Display & Search

#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *next;

  node(int val) {
    data = val;
    next = NULL;
  }
};

void insertAtHead(node *&head, int val) {
  node *n = new node(val);
  n->next = head;
  head = n;
}

void append(node *&head, int val) {
  if (head == NULL) {
    insertAtHead(head, val);
  } else {
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
      temp = temp->next;
    temp->next = n;
  }
}

bool search(node *head, int val) {
  cout << "Searching : " << val << endl;
  while (head != NULL) {
    if (head->data == val)
      return true;
    else
      head = head->next;
  }
  return false;
}

void deleteNode(node *&head, int val) {
  if (head == NULL)
    return;
  node *temp = head;
  if (temp->data == val) {
    head = temp->next;
    delete temp;
    return;
  }
  while (temp->next->data != val)
    temp = temp->next;
  node *temp2 = temp->next;
  temp->next = temp2->next;
  temp2->next = NULL;
  delete temp2;
}

void display(node *head) {
  while (head != NULL) {
    cout << head->data << "->";
    head = head->next;
  }
  cout << endl;
}

int main() {
  node *head = NULL;
  append(head, 10);
  append(head, 20);
  append(head, 30);
  append(head, 40);
  append(head, 50);
  insertAtHead(head, 0);
  display(head);
  deleteNode(head, 0);
  display(head);
  cout << search(head, 100) << endl;
}

// OUTPUT:
// 0->10->20->30->40->50->
// 10->20->30->40->50->
// Searching : 100
// 0