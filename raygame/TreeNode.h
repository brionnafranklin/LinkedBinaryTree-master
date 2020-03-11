#pragma once
//A node to be placed in a binary tree
class TreeNode
{
public:
	//constructer for TreeNode
	TreeNode(int value) { m_value = value; }
	//deconstructer for TreeNode
	~TreeNode() {}

	//returns true if m_left is not null
	bool hasLeft() { return (m_left != nullptr); }
	//returns true if m_right is not null
	bool hasRight() { return (m_right != nullptr); }

	//returns m_value
	int getData() { return m_value; }
	//returns m_left
	TreeNode* getLeft() { return m_left; }
	//returns m_right
	TreeNode* getRight() { return m_right; }

	//sets the number stored in the node
	void setData(int value) { m_value = value; }
	//sets the node's left child
	void setLeft(TreeNode* node) { m_left = node; }
	//sets the node's right child
	void setRight(TreeNode* node) { m_right = node; }

	//draws a circle for the node and puts it's value inside of it
	void draw(int x, int y, bool selected = false);
private:
	//data this node stores
	int m_value;

	//this node's left child
	TreeNode * m_left;
	//this node's right child
	TreeNode * m_right;
};

