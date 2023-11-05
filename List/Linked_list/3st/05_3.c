#include "stdio.h"
#include "CircularLinkedList.h"

int main(void) {
	linkedList_h* CL;
	listNode* p;

	CL = createLinkedList_h();		// ���� ���� ���� ����Ʈ ����
	//printf("(1) ���� ���� ����Ʈ �����ϱ�! \n");
	printList(CL);

	//printf("\n(2) ���� ���� ����Ʈ�� [Mon] ��� �����ϱ�! \n");
	insertFirstNode(CL, "Mon");
	printList(CL);

	//printf("\n(3) ���� ���� ����Ʈ�� [Mon] ��� �ڿ� [Wed] ��� �����ϱ�! \n");
	p = searchNode(CL, "Mon"); insertMiddleNode(CL, p, "Wed");
	printList(CL);

	//printf("\n(4) ���� ���� ����Ʈ�� [Wed] ��� �ڿ� [Fri] ��� �����ϱ�! \n");
	p = searchNode(CL, "Wed"); insertMiddleNode(CL, p, "Fri");
	printList(CL);

	//printf("\n(5) ���� ���� ����Ʈ���� [Wed] ��� �����ϱ�! \n");
	p = searchNode(CL, "Wed");  deleteNode(CL, p);
	printList(CL);  	getchar();
	return 0;
}