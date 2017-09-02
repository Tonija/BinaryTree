#include "BinaryTree.h"
#include <iostream>

using namespace std;



BinaryTree::BinaryTree()
{
}

BinaryTree::BinaryTree(int n) 
{
	this->n = n;
	this->left = NULL;
	this->right = NULL;
}


BinaryTree::~BinaryTree()
{
}
