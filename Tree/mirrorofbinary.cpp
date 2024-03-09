#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node* newNode(int data) {
  Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void mirror(Node* node) {
  if (node == NULL) {
    return;
  }

  mirror(node->left);
  mirror(node->right);

  Node* temp = node->left;
  node->left = node->right;
  node->right = temp;
}

void printTree(Node* node) {
  if (node == NULL) {
    return;
  }

  cout << node->data << " ";
  printTree(node->left);
  printTree(node->right);
}

int main() {
  Node* root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  cout << "Original tree: ";
  printTree(root);
  cout << endl;

  mirror(root);

  cout << "Mirror tree: ";
  printTree(root);
  cout << endl;

  return 0;
}