#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

class LinkedList {
public:
  Node* head;
  LinkedList() {
    head = NULL;
  }

  void reverse() {
    Node* prev = NULL;
    Node* current = head;
    Node* next;

    while (current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

    head = prev;
  }

  void print() {
    Node* current = head;
    while (current != NULL) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

int main() {
  LinkedList l;
  l.head = new Node(1);
  l.head->next = new Node(2);
  l.head->next->next = new Node(3);
  l.head->next->next->next = new Node(4);
  l.head->next->next->next->next = new Node(5);

  cout << "Original linked list: ";
  l.print();

  l.reverse();

  cout << "Reversed linked list: ";
  l.print();

  return 0;
}