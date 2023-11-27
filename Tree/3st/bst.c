#include<stdio.h> 
#include<stdlib.h> 
#include "node.h"
#include "bst.h"

// Operation to search for the node with key x in the binary search tree
treeNode* searchBST(treeNode* root, element x) {
    treeNode* p;
    p = root;
    while (p != NULL) {
        if (x < p->key) p = p->left;
        else if (x == p->key) return p;
        else p = p->right;
    }
    printf("\n Key not found!");
    return p;
}

// Operation to insert node x by comparing with the node pointed by the pointer p
treeNode* insertBSTNode(treeNode* p, element x) {
    treeNode* newNode;
    if (p == NULL) {
        newNode = (treeNode*)malloc(sizeof(treeNode));
        newNode->key = x;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    else if (x < p->key)  p->left = insertBSTNode(p->left, x);
    else if (x > p->key)  p->right = insertBSTNode(p->right, x);
    else  printf("\n The key already exists! \n");

    return p;
}

// Operation to search from the root node and delete the node with the same key
void deleteBSTNode(treeNode* root, element key) {
    treeNode* parent, * p, * succ, * succ_parent;
    treeNode* child;

    parent = NULL;
    p = root;
    while ((p != NULL) && (p->key != key)) {  // Search for the position of the node to be deleted
        parent = p;
        if (key < p->key) p = p->left;
        else p = p->right;
    }

    // If the node to be deleted does not exist
    if (p == NULL) {
        printf("\n The key is not in the binary tree!!");
        return;
    }

    // If the node to be deleted is a leaf node
    if ((p->left == NULL) && (p->right == NULL)) {
        if (parent != NULL) {
            if (parent->left == p) parent->left = NULL;
            else parent->right = NULL;
        }
        else root = NULL;
    }

    // If the node to be deleted has one child node
    else if ((p->left == NULL) || (p->right == NULL)) {
        if (p->left != NULL) child = p->left;
        else child = p->right;

        if (parent != NULL) {
            if (parent->left == p) parent->left = child;
            else parent->right = child;
        }
        else root = child;
    }

    // If the node to be deleted has two child nodes
    else {
        succ_parent = p;
        succ = p->left;
        while (succ->right != NULL) { // Find the successor in the left subtree
            succ_parent = succ;
            succ = succ->right;
        }
        if (succ_parent->left == succ)  succ_parent->left = succ->left;
        else succ_parent->right = succ->left;
        p->key = succ->key;
        p = succ;
    }
    free(p);
}
