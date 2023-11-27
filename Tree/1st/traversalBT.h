#pragma once
typedef char element;

typedef struct treeNode {    // 트리 노드를 정의하는 구조체
    element data;            // 노드에 저장될 데이터
    struct treeNode* left;    // 왼쪽 자식 노드를 가리키는 포인터
    struct treeNode* right;   // 오른쪽 자식 노드를 가리키는 포인터
} treeNode;

treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode);
void preorder(treeNode* root);
void inorder(treeNode* root);
void postorder(treeNode* root);
