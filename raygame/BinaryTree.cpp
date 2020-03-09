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
	TreeNode* insertNode = new TreeNode(a_nValue);

	//If the tree is empty
	if (isEmpty())
	{
		//The value is inserted at the root
		m_pRoot = insertNode;
	}
	else
	{
		//Set the current node to the root
		TreeNode* currentNode = m_pRoot;
		TreeNode* parentNode = currentNode;

		//While the current node is !null
		while (currentNode != nullptr)
		{
			//If the value to be inserted is less than the value in the current node
			if (a_nValue < currentNode->getData())
			{
				//Set the current node to the left
				parentNode = currentNode;
				currentNode = currentNode->getLeft();
			}
			//If the value to be inserted is greater than the value in the current node
			else if (a_nValue > currentNode->getData())
			{
				//Set the current node to the right
				parentNode = currentNode;
				currentNode = currentNode->getRight();
			}
			//If the value to be inserted is equel the value in the current node
			else if (a_nValue == currentNode->getData())
			{
				//Set the current node to null
				currentNode = nullptr;
			}
		}

		//If the value to be inserted is less than parent
		if (a_nValue < parentNode->getData())
		{
			//Insert value as left child node
			parentNode->setLeft(insertNode);
		}
		else if (a_nValue > parentNode->getData())
		{
			//Insert value as right child
			parentNode->setRight(insertNode);
		}
	}
}

void BinaryTree::remove(int a_nValue)
{
	//Find the value in the tree, obtaining a pointer to the node and its parent
	TreeNode * temNode;
	TreeNode * temParent;
	findNode(a_nValue, &temNode, &temParent);

	//Return if node is not found
	if (temNode == nullptr)
	{
		return;
	}

	//If the current node has a right branch, then find the minimum value in the right branch by iterating
	if (temNode->hasRight)
	{
		TreeNode * minNode;
		minNode = temNode->getRight();
		temParent = temNode;

		//down the left branch of the current node's right child until there are no more left branch nodes and keep track of the minimum node's parent
		while (minNode->hasLeft())
		{
			temNode = minNode;
			minNode = minNode->getLeft();
		}

		//Copy the value from this minimum node to the current node
		temNode->setData(minNode->getData());

		//If we are deleting the parent's left node
		if (minNode == temParent->getLeft())
		{
			//Set the left child of the parent to the right child of the minimum node
			temParent->setLeft(minNode->getRight());
			remove(temNode->getData());
		}

		//If we are deleting the parent's right node
		if (minNode == temParent->getRight())
		{
			//Set the right child of the parent to the right child of the minimum node
			temParent->setRight(minNode->getRight());
			remove(temParent->getData());
		}
	}

	//If the current no has no right branch
	else if (!(temNode->hasRight))
	{
		//If we are deleting the parent's left child
		if ()
	}
}

TreeNode * BinaryTree::find(int a_nValue)
{
	TreeNode * temNode;
	TreeNode * temParent;
	findNode(a_nValue, &temNode, &temParent);
	return temNode;
}

void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 170, 640, selected);
}

bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	//Set the current node to the root
	TreeNode* currentNode = m_pRoot;
	TreeNode* parentNode = currentNode;

	//While the current node is not null
	while (currentNode != nullptr)
	{
		//If the value to be inserted is less than the value in the current node
		if (a_nSearchValue < currentNode->getData())
		{
			//Set the current node to the left
			parentNode = currentNode;
			currentNode = currentNode->getLeft();
		}
		//If the value to be inserted is greater than the value in the current node
		else if (a_nSearchValue > currentNode->getData())
		{
			//Set the current node to the right
			parentNode = currentNode;
			currentNode = currentNode->getRight();
		}
		//If the value to be inserted is equel the value in the current node
		else if (a_nSearchValue == (currentNode)->getData())
		{
			//Return the current node and its parent
			*ppOutNode = currentNode;
			*ppOutParent = parentNode;
			return true;
		}
	}
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
			DrawLine(x, y, x - horizontalSpacing, y + 80, RED);
			//draw the left node
			draw(pNode->getLeft(), x - horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//check for a right node
		if (pNode->hasRight())
		{
			//draw a line to the right node
			DrawLine(x, y, x + horizontalSpacing, y + 80, RED);
			//draw the right node
			draw(pNode->getRight(), x + horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//draw the current node
		pNode->draw(x, y, (selected == pNode));
	}
}
