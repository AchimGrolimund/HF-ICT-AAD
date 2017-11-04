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
		int sum(Node *n);
		void printLeaves(Node *n, vector<int> pfad);
		void getUncestor(int value, Node *n);
	public:
		BinaryTree();
		void insert(int v);
		int height();
		void postOrder();
		void inOrder();
		void preOrder();
		int sum();
		void printLeaves();
		void getUncestor(int value);
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

int BinaryTree::sum(Node *n){

	if(n == 0) return  0;
	int v = n->value;
	return sum(n->left) + v + sum(n->right);
}
int BinaryTree::sum(){

	return sum(root);
}

void BinaryTree::printLeaves(Node *n, vector<int> pfad){
	if(n == 0) return;

	if(n->left != 0){
		pfad.push_back(n->value);
		printLeaves(n->left, pfad);
		pfad.pop_back();
	}else{
		cout<<n->value<<" -- ";
		for(const auto &x : pfad) cout<<x<<" - ";
		cout<<n->value<<endl;
		return;
	}

	if(n->right != 0){
		pfad.push_back(n->value);
		printLeaves(n->right, pfad);
		pfad.pop_back();
	}else{
		cout<<n->value<<" -- ";
		for(const auto &y : pfad) cout<<y<<" - ";
		cout<<n->value<<endl;
		return;
	}
}

void BinaryTree::printLeaves(){
	vector<int> pfad;
	printLeaves(root, pfad);
}

void BinaryTree::getUncestor( int value, Node *n){

	if(n->value == 0) return;

	if((n->left != 0 && value == n->left->value) || (n->right != 0 && value == n->right->value)){
		cout<<n->value<<endl;
		return;
	}else{
		getUncestor(value,n->left);
		getUncestor(value,n->right);
	}

}



void BinaryTree::getUncestor(int value){
	getUncestor(value, root);
}


int main() {
	BinaryTree bt;
	int values[] = {30,20,50,2,29,47,55};
	int sum(0);
	for (int &x : values) {
		bt.insert(x);
		sum += values[1];
	}


	bt.getUncestor(55);

	return 0;
}









