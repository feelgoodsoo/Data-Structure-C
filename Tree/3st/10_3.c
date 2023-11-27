#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bst.h"

void menu(void);

int main(void) {
    treeNode* root = NULL;
    treeNode* foundedNode = NULL;
    char choice, key;

    // Construct an initial binary search tree as shown in [Figure 7-38]
    // and designate the node 'G' as the root node pointer 'root'
    root = insertBSTNode(root, 'G');
    insertBSTNode(root, 'I');
    insertBSTNode(root, 'H');
    insertBSTNode(root, 'D');
    insertBSTNode(root, 'B');
    insertBSTNode(root, 'M');
    insertBSTNode(root, 'N');
    insertBSTNode(root, 'A');
    insertBSTNode(root, 'J');
    insertBSTNode(root, 'E');
    insertBSTNode(root, 'Q');

    while (1) {
        menu();
        scanf(" %c", &choice);

        switch (choice - '0') {
        case 1: printf("\t[Binary Tree Output]  ");
            displayInorder(root); printf("\n");
            break;

        case 2: printf("Enter the character to insert: ");
            scanf(" %c", &key);
            insertBSTNode(root, key);
            break;

        case 3: printf("Enter the character to delete: ");
            scanf(" %c", &key);
            deleteBSTNode(root, key);
            break;

        case 4: printf("Enter the character to search: ");
            scanf(" %c", &key);
            foundedNode = searchBST(root, key);
            if (foundedNode != NULL)
                printf("\n Found %c! \n", foundedNode->key);
            else  printf("\n Unable to find the character. \n");
            break;

        case 5: return 0;

        default: printf("Invalid menu. Please select a menu again! \n");
            break;
        }
    }
}

void menu(void) {
    printf("\n*---------------------------*");
    printf("\n\t1: Display Tree");
    printf("\n\t2: Insert Character");
    printf("\n\t3: Delete Character");
    printf("\n\t4: Search Character");
    printf("\n\t5: Exit");
    printf("\n*---------------------------*");
    printf("\nMenu input >> ");
}
