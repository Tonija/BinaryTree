#pragma once
class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	BinaryTree(int n);
	int n;
	BinaryTree *left, *right;
};

