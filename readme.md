| Brionna Franklin|
| :---              |
| s198017          |
| Assessment 3 - TikTakToe|
| TikTakToe Documentation |

## I. Design

1. Object Information

    **File**: BinaryTree.h

        Description: An organized tree the sorts and stores nodes

            Operations:

                -Name: BinaryTree
                Description: default binary tree constructor
                Type: constructor
                Visibility: public
                
                -Name: BinaryTree
                Description: default binary tree deconstructor
                Type: deconstructor
                Visibility: public
                
                -Name: isEmpty
                Description: checks to see if the root is empty
                Type: bool
                Visibility: public
                
                -Name: insert
                Description: puts a given node in the tree
                Type: void
                Visibility: public
                
                -Name: remove
                Description: removes a node from the tree
                Type: void
                Visibility: public
                
                -Name: find
                Description: findes a node in the tree by is number value starting at the root
                Type: TreeNode pointer
                Visibility: public
                
                -Name: draw
                Description: draws the tree starting with the root
                Type: void
                Visibility: public
                
                -Name: findNode
                Description: findes a node in the tree by is number value
                Type: bool
                Visibility: private
                
                -Name: draw
                Description: draws the binary tree
                Type: void
                Visibility: private
                
            Attributes:
                
                -Name: m_pRoot
                Description: the root node of the tree
                Type: reeNode pointer
                Visibility: private
                
   **File**: TreeNode.h

        Description: A node to be placed in a binary tree

            Operations:
                
                -Name: TreeNode
                Description: constructer for TreeNode
                Type: constructer
                Visibility: public
                
                -Name: TreeNode
                Description: deconstructer for TreeNode
                Type: deconstructer
                Visibility: public
                
                -Name: hasLeft
                Description: returns true if m_left is not null
                Type: bool
                Visibility: public
                
                -Name: hasRight
                Description: returns true if m_right is not null
                Type: bool
                Visibility: public
                
                -Name: getData
                Description: returns m_value
                Type: int
                Visibility: public
                
                -Name: getLeft
                Description: returns m_left
                Type: TreeNode pointer
                Visibility: public
                
                -Name: getRight
                Description: returns m_right
                Type: TreeNode pointer
                Visibility: public
                
                -Name: setData
                Description: sets the number stored in the node
                Type: void
                Visibility: public
                
                -Name: setLeft
                Description: sets the node's left child
                Type: void
                Visibility: public
                
                -Name: setRight
                Description: sets the node's right child
                Type: void
                Visibility: public
                
                -Name: draw
                Description: draws a circle for the node and puts it's value inside of it
                Type: void
                Visibility: public
                
            Attributes:
                
                -Name: m_value
                Description: data this node stores
                Type: int
                Visibility: private
                
                -Name: m_left
                Description: this node's left child
                Type: TreeNode pointer
                Visibility: private
                
                -Name: m_right
                Description: this node's right child
                Type: TreeNode pointer
                Visibility: private
                
      **File**: main.cpp

        Description: runs on start up

            Operations:
                
                -Name: main
                Description: the only function in main.cpp; runs on start up
                Type: int
                Visibility: private
                
## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib
