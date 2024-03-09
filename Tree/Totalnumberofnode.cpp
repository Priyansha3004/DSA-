#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
};

int totalNodes(node* root)
{
	if (root == NULL)
		return 0;

	int l = totalNodes(root->left);
	int r = totalNodes(root->right);

	return 1 + l + r;
}


node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	return (Node);
}

int main()
{
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(9);
	root->right->right = newNode(8);
	root->left->left->left = newNode(6);
	root->left->left->right = newNode(7);
	cout << totalNodes(root);
	return 0;
}
