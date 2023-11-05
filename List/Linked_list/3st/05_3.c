#include "stdio.h"
#include "CircularLinkedList.h"

int main(void) {
	linkedList_h* CL;
	listNode* p;

	CL = createLinkedList_h();		// 공백 원형 연결 리스트 생성
	//printf("(1) 원형 연결 리스트 생성하기! \n");
	printList(CL);

	//printf("\n(2) 원형 연결 리스트에 [Mon] 노드 삽입하기! \n");
	insertFirstNode(CL, "Mon");
	printList(CL);

	//printf("\n(3) 원형 연결 리스트의 [Mon] 노드 뒤에 [Wed] 노드 삽입하기! \n");
	p = searchNode(CL, "Mon"); insertMiddleNode(CL, p, "Wed");
	printList(CL);

	//printf("\n(4) 원형 연결 리스트의 [Wed] 노드 뒤에 [Fri] 노드 삽입하기! \n");
	p = searchNode(CL, "Wed"); insertMiddleNode(CL, p, "Fri");
	printList(CL);

	//printf("\n(5) 원형 연결 리스트에서 [Wed] 노드 삭제하기! \n");
	p = searchNode(CL, "Wed");  deleteNode(CL, p);
	printList(CL);  	getchar();
	return 0;
}