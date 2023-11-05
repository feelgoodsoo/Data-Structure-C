#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

int main(void) {
	LQueueType* LQ = createLinkedQueue();  // 연결 큐 생성
	element data;
	printf("\n ***** LinkedQueue Calc ***** \n");
	printf("\n Insert A>>");  enLQueue(LQ, 'A'); printLQ(LQ);
	printf("\n Insert B>>");  enLQueue(LQ, 'B'); printLQ(LQ);
	printf("\n Insert C>>");  enLQueue(LQ, 'C'); printLQ(LQ);
	data = peekLQ(LQ);    printf(" peek item : %c \n", data);
	printf("\n Delete Data");  data = deLQueue(LQ); printLQ(LQ);
	printf("\tDelete Data: %c", data);
	printf("\n Delete Data");  data = deLQueue(LQ); printLQ(LQ);
	printf("\tDelete Data: %c", data);
	printf("\n Delete Data");  data = deLQueue(LQ); printLQ(LQ);
	printf("\t\tDelete Data: %c", data);
	printf("\n Insert D>>");  enLQueue(LQ, 'D'); printLQ(LQ);
	printf("\n Insert E>>");  enLQueue(LQ, 'E'); printLQ(LQ);
	getchar();  return 0;
}