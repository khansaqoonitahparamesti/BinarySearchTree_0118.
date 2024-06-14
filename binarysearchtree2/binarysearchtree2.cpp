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

};