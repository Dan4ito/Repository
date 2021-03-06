// BST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "BinSearchTree.h"

using namespace std;

int main()
{
	BinSearchTree tree;
	for (size_t i = 0; i < 10; i++)
	{
		tree.insert(i);
	}
	TreeNode* neew = tree.search(5);
	//
	BinSearchTree tree2;
	tree2 = tree;
	//
	BinSearchTree tree3(tree);
	//
	if (tree == tree2) cout << "random";
	//
	tree.deleteFromSubtree(0);
	TreeNode* neew2 = tree.search(0);
	cout << endl;
	cout << tree.count();
	cout << endl;
	cout << tree.countEvens();
	cout << endl;
	cout << tree.height();
	cout << endl;
	cout << tree.countLeaves();
	cout << endl;
	TreeNode* neew3 = tree.maxLeaf();
	tree.insert(-1);
	std::vector<int> leaves = tree.leavesValues();
	for (size_t i = 0; i < leaves.size(); i++)
	{
		cout << leaves[i] << "  ";
	}
	cout << endl;
	std::vector<int> leaves2 = tree.level(1);
	for (size_t i = 0; i < leaves2.size(); i++)
	{
		cout << leaves2[i] << "  ";
	}
	cout << endl;
	

	//
    return 0;
}

