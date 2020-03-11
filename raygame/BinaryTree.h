#pragma once
#include "TreeNode.h"
//An organized tree the sorts and stores nodes
class BinaryTree
{
public:
	//default binary tree constructor
	BinaryTree();
	//default binary tree deconstructor
	~BinaryTree();

	//checks to see if the root is empty
	bool isEmpty() const;
	//puts a given node in the tree
	void insert(int a_nValue);
	//removes a node from the tree
	void remove(int a_nValue);
	//findes a node in the tree by is number value starting at the root
	TreeNode* find(int a_nValue);

	//draws the tree starting with the root
	void draw(TreeNode* selected = nullptr);

private:
	//findes a node in the tree by is number value
	bool findNode(int a_nSearchValue, TreeNode** ppOutNode, TreeNode** ppOutParent);

	//draws the binary tree
	void draw(TreeNode* pNode, int x, int y, int horizontalSpacing, TreeNode* selected = nullptr);

	//the root node of the tree
	TreeNode* m_pRoot;
};

