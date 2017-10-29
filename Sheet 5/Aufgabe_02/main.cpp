/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:		1.0.0
 * @Author:			Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:			01.1.2017
 *
 * @Description:

 *
 * Beispiel:

 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#define DEBUG
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
		bool isBinarySearchTree(Node * last);
	public:
		BinaryTree();
		void insert(int v);
		int height();
		void postOrder();
		void inOrder();
		void preOrder();
		bool isBinarySearchTree();
};

BinaryTree::BinaryTree() : root(0) {
}

void BinaryTree::insert(int v, Node * n) {
	if (v < n->value) {
		// left
		if (n->left == 0) {
			n->left = new Node(v);
		} else {
			insert(move(v), move(n->left));
		}
	} else {
		// right
		if (n->right == 0) {
			n->right = new Node(v);
		} else {
			insert(move(v), move(n->right));
		}
	}
}

void BinaryTree::insert(int v) {
	if (root == 0) {
		root = new Node(v);
	} else {
		insert(move(v), move(root));
	}
}

void BinaryTree::postOrder(Node *n)
{
	if(n != 0){
		postOrder(move(n->left));
		postOrder(move(n->right));
		cout<< n->value<<endl;
	}
}

void BinaryTree::postOrder()
{
	postOrder(move(root));
}

void BinaryTree::inOrder(Node *n)
{
	if(n != 0){
		inOrder(move(n->left));
		cout<< n->value<<endl;
		inOrder(move(n->right));
	}
}

void BinaryTree::inOrder()
{
	inOrder(move(root));
}

void BinaryTree::preOrder(Node *n)
{
	if(n != 0){
		cout<< n->value<<endl;
		preOrder(move(n->left));
		preOrder(move(n->right));
	}
}

void BinaryTree::preOrder()
{
	preOrder(move(root));
}



bool BinaryTree::isBinarySearchTree(Node *last)
{
	int left = 1;
	int right = 1;
	if (last->left != 0) {
		left = isBinarySearchTree(move(last->left)) + 1;
	}
	if (last->right != 0) {
		right = isBinarySearchTree(move(last->right)) + 1;
	}
	if (left > right || left < right) {
		return false;
	} else {
		return true;
	}
}

bool BinaryTree::isBinarySearchTree()
{
	if(root != 0){
		return isBinarySearchTree(move(root));
	}else{
		return 0;
	}
}



class TreeUtil{
	public:
		static bool isBinarySearchTree(vector<int> values);
};


bool TreeUtil::isBinarySearchTree(vector<int> values)
{
	BinaryTree bt;
	for(const auto & x : values){
		bt.insert(move(x));
	}

	return bt.isBinarySearchTree();

}


int main() {
	srand(static_cast<unsigned int>(time(NULL)));

	vector<int> myVec{20,12,34};
	vector<int> myVec2;

	for (unsigned int i(0); i < 7; ++i) {
		myVec2.push_back(rand()%10000);
	}

	TreeUtil tu;
	auto start = myTime::start();
	cout << tu.isBinarySearchTree(move(myVec2))<<endl;
	myTime::stop(start);



	return 0;
}


