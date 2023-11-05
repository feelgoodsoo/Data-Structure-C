#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

int main(void) {
	linkedList_h* DL;
	listNode* p;

	DL = createLinkedList_h();  // ���� ����Ʈ ����
	//printf("(1) ���� ���� ����Ʈ �����ϱ�! \n");
	printList(DL); 

	//printf("\n(2) ���� ���� ����Ʈ�� [Mon] ��� �����ϱ�! \n");
	insertNode(DL, NULL, "Mon");
	printList(DL); 

	//printf("\n(3) ���� ���� ����Ʈ�� [Mon] ��� �ڿ� [Wed] ��� �����ϱ�! \n");
	p = searchNode(DL, "Mon"); insertNode(DL, p, "Wed");
	printList(DL); 

	//printf("\n(4) ���� ���� ����Ʈ�� [Wed] ��� �ڿ� [Fri] ��� �����ϱ�! \n");
	p = searchNode(DL, "Wed"); insertNode(DL, p, "Fri");
	printList(DL); 

	//printf("\n(5) ���� ���� ����Ʈ���� [Wed] ��� �����ϱ�! \n");
	p = searchNode(DL, "Wed");      	deleteNode(DL, p);
	printList(DL); 

	getchar();  return 0;
}