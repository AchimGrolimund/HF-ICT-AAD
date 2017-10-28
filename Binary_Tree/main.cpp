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

class Node
{
	public:
		Node * left;
		Node * right;
		int value;
		Node( int value);
};

Node::Node(int value)  : value(value), left(0), right(0){
}


class BinaryTree
{
	private:
		Node * root;
		void insert(int v, Node * n);
	public:
		BinaryTree();
		void insert(int v);
		int height();
};

void BinaryTree::insert(int v, Node *n)
{
	if (v < n->value) {
		//left
		if (n->left == 0) {
			n->left = new Node(v);
		}
	}else{
		//right
		if (n->right == 0) {
			n->right = new Node(v);
		}else{
			insert(v,n->right);
		}
	}
}

void BinaryTree::insert(int v){
	if (root == 0) {
		root = new Node(v);
	}else{
		insert(v,root);
	}
}

int BinaryTree::height()
{

}


int main()
{
	BinaryTree bt;
	int values[] {50,25,75,14,7,19,63,89,99,79};

	for(int &x : values){
		bt.insert(x);
	}

	return 0;
}



























