#include <iostream>

using namespace std;

struct MyTreeNode {
  int data;
  MyTreeNode* left;
  MyTreeNode* right;
};

int sum(MyTreeNode* root) {
  if (root == nullptr) {
    return 0;
  }

  return root->data + sum(root->left) + sum(root->right);
}

int main() {
  MyTreeNode* root = new MyTreeNode;
  root->data = 10;
  root->left = new MyTreeNode;
  root->left->data = 5;
  root->right = new MyTreeNode;
  root->right->data = 15;

  int sum = sum(root);

  cout << "The sum of all the nodes in the tree is: " << sum << endl;

  return 0;
}