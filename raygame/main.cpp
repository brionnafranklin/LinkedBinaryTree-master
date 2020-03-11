/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "TreeNode.h"
#include "BinaryTree.h"

//the only function in main.cpp; runs on start up
int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------

	//set screen width
	int screenWidth = 1600;
	//set screen height
	int screenHeight = 900;

	//creates basic window
	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	//sets the fps
	SetTargetFPS(60);

	//creates binary tree
	BinaryTree tree;
	//creates a pointer to a node used to select a node
	TreeNode * selected;

	//populate tree
	tree.insert(4);
	tree.insert(8);
	tree.insert(2);
	tree.insert(1);
	tree.insert(14);
	tree.insert(69);
	tree.insert(420);
	tree.insert(34);
	tree.insert(42);

	//selects a node
	selected = tree.find(69);

	//removes a node from the tree
	tree.remove(14);

	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(RAYWHITE);

		//DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		tree.draw(selected);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}