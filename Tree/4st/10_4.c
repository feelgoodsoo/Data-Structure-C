#include <stdio.h>
#include "avl.h"
#include "bst2.h"

int main(void) {
    treeNode* root_AVL = NULL;
    treeNode* root_BST = NULL;
    //////////////////////////////////////////////////////////////////////
    root_AVL = insertAVLNode(&root_AVL, 50); // Create AVL tree
    insertAVLNode(&root_AVL, 60);
    insertAVLNode(&root_AVL, 70);
    insertAVLNode(&root_AVL, 90);
    insertAVLNode(&root_AVL, 80);
    insertAVLNode(&root_AVL, 75);
    insertAVLNode(&root_AVL, 73);
    insertAVLNode(&root_AVL, 72);
    insertAVLNode(&root_AVL, 78);
    printf("\n ******* AVL Tree Output ****************** \n\n");
    displayInorder(root_AVL); // Display the inorder traversal path
    printf("\n\n Searching 70 in AVL Tree: ");
    searchBST(root_AVL, 70);
    printf("\n\n Searching 72 in AVL Tree: ");
    searchBST(root_AVL, 72);
    printf("\n\n Searching 76 in AVL Tree: ");
    searchBST(root_AVL, 76);

    ///////////////////////////////////////////////////////////////////////////////
    root_BST = insertBSTNode(root_BST, 50); // Create BST
    insertBSTNode(root_BST, 60);
    insertBSTNode(root_BST, 70);
    insertBSTNode(root_BST, 90);
    insertBSTNode(root_BST, 80);
    insertBSTNode(root_BST, 75);
    insertBSTNode(root_BST, 73);
    insertBSTNode(root_BST, 72);
    insertBSTNode(root_BST, 78);
    printf("\n\n\n ******* BST Output ************************ \n\n");
    displayInorder(root_BST);  // Display the inorder traversal path
    printf("\n\n Searching 70 in BST: ");
    searchBST(root_BST, 70);
    printf("\n\n Searching 72 in BST: ");
    searchBST(root_BST, 72);
    printf("\n\n Searching 76 in BST: ");
    searchBST(root_BST, 76);
    getchar(); 
    return 0;
}
