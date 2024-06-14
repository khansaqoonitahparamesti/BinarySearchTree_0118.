// binarysearchtree2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//contructor for the node class
	Node(string i, Node* 1, Node* r) 
	{
		info = i;
		leftchild = 1;
		rightchild = r;

	}
};

class BinaryTree {
public:
	Node* ROOT;

	BinaryTree() {
		ROOT = NULL;//initializing ROOT to NULL
	}

	void insert(string element)// insert node in the binary search tree
	{
		Node* newNode = new Node (element,NULL,NULL);
		newNode->info = element;
		newNode->leftchild = NULL;
		newNode->rightchild = NULL;

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode);

		if (parent == NULL) {
			ROOT = newNode;
			return;
		}
		if (element < parent->info) 
		{
			parent->leftchild = newNode;
		}
		else if (element > parent->info) 
		{
			parent->rightchild = newNode;
		}
	}

	void search(string element, Node*& parent, Node*& currentNode) 
	{
		currentNode = ROOT;
		parent = NULL;
		while ((currentNode != NULL) && (currentNode->info != element)) 
		{
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
		}
	}

};