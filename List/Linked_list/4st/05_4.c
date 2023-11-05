#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

int main(void) {
	linkedList_h* DL;
	listNode* p;

	DL = createLinkedList_h();  // 공백 리스트 생성
	//printf("(1) 이중 연결 리스트 생성하기! \n");
	printList(DL); 

	//printf("\n(2) 이중 연결 리스트에 [Mon] 노드 삽입하기! \n");
	insertNode(DL, NULL, "Mon");
	printList(DL); 

	//printf("\n(3) 이중 연결 리스트의 [Mon] 노드 뒤에 [Wed] 노드 삽입하기! \n");
	p = searchNode(DL, "Mon"); insertNode(DL, p, "Wed");
	printList(DL); 

	//printf("\n(4) 이중 연결 리스트의 [Wed] 노드 뒤에 [Fri] 노드 삽입하기! \n");
	p = searchNode(DL, "Wed"); insertNode(DL, p, "Fri");
	printList(DL); 

	//printf("\n(5) 이중 연결 리스트에서 [Wed] 노드 삭제하기! \n");
	p = searchNode(DL, "Wed");      	deleteNode(DL, p);
	printList(DL); 

	getchar();  return 0;
}