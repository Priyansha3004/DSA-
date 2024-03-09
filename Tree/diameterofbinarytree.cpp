#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
};

int height(Node* node) {
  if (node == nullptr) {
    return 0;
  }
  int leftHeight = height(node->left);
  int rightHeight = height(node->right);
  return 1 + max(leftHeight, rightHeight);
}

int diameter(Node* node) {
  if (node == nullptr) {
    return 0;
  }
  int leftHeight = height(node->left);
  int rightHeight = height(node->right);
  int leftDiameter = diameter(node->left);
  int rightDiameter = diameter(node->right);
  return max(leftHeight + rightHeight, max(leftDiameter, rightDiameter));
}

int main() {
  Node* root = new Node{1};
  root->left = new Node{2};
  root->right = new Node{3};
  root->left->left = new Node{4};
  root->left->right = new Node{5};

  cout << "Diameter of the binary tree: " << diameter(root) << endl;

  return 0;
}