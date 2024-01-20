#include<iostream>
using namespace std;
//// deletion of kth node of a linked list 
class Node {
public:
  int data;
  Node* next;
};
Node* deleteKthNode(Node* head, int k) {
  if (head == nullptr || k < 1) {
    return head;
  }
  Node* current = head;
  Node* previous = nullptr;
  for (int i = 0; i < k - 1; i++) {
    current = current->next;
  }
  if (current == head) {
    head = head->next;
  } else {
    previous->next = current->next;
  }
  delete current;

  return head;
}

int main() {
  Node* head = new Node{1};
  head->next = new Node{2};
  head->next->next = new Node{3};
  head->next->next->next = new Node{4};

  head = deleteKthNode(head, 2);

  Node* current = head;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;

  return 0;
}

       