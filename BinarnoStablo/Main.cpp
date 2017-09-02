#include <iostream>
#include <conio.h>
#include "BinaryTree.h"

using namespace std;

void addNew(BinaryTree **bt, int n);
void showAll(BinaryTree *bt);

int main() {
	BinaryTree *ROOT = NULL;
	int n;
	char c;

	do {
		cout << "Type \'a\' to add new\n\'s\' to show all" << endl;
		c = _getch();

		switch (c) {
		case 'a':
			cout << "Upisite novi broj: ";
			cin >> n;
			cout << endl;
			addNew(&ROOT, n);
			break;
			
		case 's':
			showAll(ROOT);
			break;
		}
	} while (c!= 'x');
	
	return 0;
}

void addNew(BinaryTree **bt, int n) {
	if (*bt == NULL) {
		*bt = new BinaryTree(n);
		return;
	}

	if ((*bt)->n >= n) {
		/*if (bt->left == NULL) {
			bt->left = new BinaryTree(n);
			return;
		}*/
		
		return addNew(&(*bt)->left, n);
	}

	if ((*bt)->n < n) {
		/*if (bt->right == NULL) {
			bt->right = new BinaryTree(n);
			return;
		}*/

		return addNew(&(*bt)->right, n);
	}
}

void showAll(BinaryTree *bt)
{
	if (bt == NULL)
		return;

	showAll(bt->left);
	cout << bt->n << endl;
	showAll(bt->right);
}