#include <stdio.h>
#include <stdlib.h>
#include "cQueueS.h"

int main(void) {
	QueueType* cQ = createCQueue();  // Å¥ »ý¼º
	element data;
	printf("\n ***** circular Queue Calc ***** \n");
	printf("\n Insert A>>");  enCQueue(cQ, 'A'); printCQ(cQ);
	printf("\n Insert B>>");  enCQueue(cQ, 'B'); printCQ(cQ);
	printf("\n Insert C>>");  enCQueue(cQ, 'C'); printCQ(cQ);
	data = peekCQ(cQ);    printf(" peek item : %c \n", data);
	printf("\n Delete  >>");  data = deCQueue(cQ); printCQ(cQ);
	printf("\tDelete Data: %c", data);
	printf("\n Delete  >>");  data = deCQueue(cQ); printCQ(cQ);
	printf("\tDelete Data: %c", data);
	printf("\n Delete  >>");  data = deCQueue(cQ); printCQ(cQ);
	printf("\t\tDelete Data: %c", data);
	printf("\n Insert D>>");  enCQueue(cQ, 'D'); printCQ(cQ);
	printf("\n Insert E>>");  enCQueue(cQ, 'E'); printCQ(cQ);
	getchar(); return 0;
}