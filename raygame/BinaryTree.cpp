#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 680, 640, selected);
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
