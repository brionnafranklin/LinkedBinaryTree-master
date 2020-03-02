#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{
	m_pRoot = nullptr;
}


BinaryTree::~BinaryTree()
{
}

bool BinaryTree::isEmpty() const
{
	if (m_pRoot == nullptr)
	{
		return true;
	}
	else
	{ 
		return false;
	}
}

void BinaryTree::insert(int a_nValue)
{
	if (isEmpty())
	{
		//m_pRoot = a_nValue;??
		
	}
}

void BinaryTree::remove(int a_nValue)
{
}

TreeNode * BinaryTree::find(int a_nValue)
{
	return nullptr;
}

void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 680, 640, selected);
}

bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	return false;
}

void BinaryTree::draw(TreeNode * pNode, int x, int y, int horizontalSpacing, TreeNode * selected)
{
	horizontalSpacing /= 2;

	if (pNode)
	{
		//check for a left node
		if (pNode->hasLeft())
		{
			//draw a line to the left node
			DrawLine(x, y, x - horizontalSpacing, y - 80, RED);
			//draw the left node
			draw(pNode->getLeft(), x - horizontalSpacing, y - 80, horizontalSpacing, selected);
		}
		//check for a right node
		if (pNode->hasRight())
		{
			//draw a line to the right node
			DrawLine(x, y, x + horizontalSpacing, y - 80, RED);
			//draw the right node
			draw(pNode->getRight(), x + horizontalSpacing, y - 80, horizontalSpacing, selected);
		}
		//draw the current node
		pNode->draw(x, y, (selected == pNode));
	}
}
