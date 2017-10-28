//#define DEBUG
#include <bits/stdc++.h>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

using namespace std;

class Node {
	public:
		Node * left;
		Node * right;
		int value;
		Node(int value);
};

Node::Node(int value) : left(0), right(0), value(value) {
}

class BinaryTree {
	private:
		Node * root;
		void insert(int v, Node *n);
		void postOrder(Node *n);
		void inOrder(Node *n);
		void preOrder(Node *n);
		int height(Node *last);
	public:
		BinaryTree();
		void insert(int v);
		int height();
		void postOrder();
		void inOrder();
		void preOrder();
};

BinaryTree::BinaryTree() : root(0) {
}

void BinaryTree::insert(int v, Node * n) {
	if (v < n->value) {
		// left
		if (n->left == 0) {
			n->left = new Node(v);
		} else {
			insert(v, n->left);
		}
	} else {
		// right
		if (n->right == 0) {
			n->right = new Node(v);
		} else {
			insert(v, n->right);
		}
	}
}

void BinaryTree::postOrder(Node *n)
{
	if(n != 0){
		postOrder(n->left);
		postOrder(n->right);
		cout<< n->value<<endl;
	}
}

void BinaryTree::postOrder()
{
	postOrder(root);
}

void BinaryTree::inOrder(Node *n)
{
	if(n != 0){
		inOrder(n->left);
		cout<< n->value<<endl;
		inOrder(n->right);
	}
}

void BinaryTree::inOrder()
{
	inOrder(root);
}

void BinaryTree::preOrder(Node *n)
{
	if(n != 0){
		cout<< n->value<<endl;
		preOrder(n->left);
		preOrder(n->right);
	}
}

void BinaryTree::preOrder()
{
	preOrder(root);
}

void BinaryTree::insert(int v) {
	if (root == 0) {
		root = new Node(v);
	} else {
		insert(v, root);
	}
}

int BinaryTree::height() {
	if (root != 0) {
		return height(root);
	} else {
		return 0;
	}
};

int BinaryTree::height(Node *last) {
	int left = 1;
	int right = 1;
	if (last->left != 0) {
		left = height(last->left) + 1;
	}
	if (last->right != 0) {
		right = height(last->right) + 1;
	}
	if (left >= right) {
		return left;
	} else {
		return right;
	}
};


int main() {
	BinaryTree bt;
	int values[] = {50, 25, 75, 14, 7, 19, 63, 89, 99, 79, 100};
	for (int &x : values) {
		bt.insert(x);
	}

	bt.preOrder();


	return 0;
}





