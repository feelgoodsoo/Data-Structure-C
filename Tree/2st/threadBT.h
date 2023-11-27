#pragma once
typedef struct treeThNode { // 쓰레드 이진 트리 노드를 정의하는 구조체
    char data;                // 노드에 저장될 데이터
    struct treeThNode* left;   // 왼쪽 자식 노드를 가리키는 포인터
    struct treeThNode* right;  // 오른쪽 자식 노드를 가리키는 포인터
    int isThreadRight;        // 쓰레드가 오른쪽 방향으로 이어져 있는지를 나타내는 플래그
} treeThNode;

treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadRight);
treeThNode* findThreadSuccessor(treeThNode* p);
void threadInorder(treeThNode* root);
