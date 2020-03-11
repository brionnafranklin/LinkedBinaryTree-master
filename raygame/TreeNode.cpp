#include "TreeNode.h"
#include <stdio.h>
#include "raylib.h"

//draws a circle for the node and puts it's value inside of it
void TreeNode::draw(int x, int y, bool selected)
{
	//declare buffer
	static char buffer[10];

	//set buffer to the value of the nose
	sprintf_s(buffer, "%d", m_value);

	//draw yellow circle outline
	DrawCircle(x, y, 30, YELLOW);

	//if the node is selected
	if (selected) 
	{
		//draw the inside of circle brown
		DrawCircle(x, y, 28, BROWN);
	}
	//if node is not selected (default)
	else
	{
		//make inside of circle black
		DrawCircle(x, y, 28, BLACK);
	}

	//write the number in white text
	DrawText(buffer, x - 12, y - 10, 20, WHITE);
}
