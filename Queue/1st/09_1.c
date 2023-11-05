#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

int main(void) {
	QueueType* Q1 = createQueue();  // Å¥ »ý¼º
	element data;
	printf("\n ***** Sequential Queue Calc ***** \n");
	printf("\n Insert A>>");  enQueue(Q1, 'A'); printQ(Q1);
	printf("\n Insert B>>");  enQueue(Q1, 'B'); printQ(Q1);
	printf("\n Insert C>>");  enQueue(Q1, 'C'); printQ(Q1);
	data = peekQ(Q1);    printf(" peek item : %c \n", data);
	printf("\n Delete  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\tDelete Data: %c", data);
	printf("\n Delete  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\tDelete Data: %c", data);
	printf("\n Delete  >>");  data = deQueue(Q1); printQ(Q1);
	printf("\t\tDelete Data: %c", data);

	printf("\n Insert D>>");  enQueue(Q1, 'D'); printQ(Q1);
	printf("\n Insert E>>");  enQueue(Q1, 'E'); printQ(Q1);
	
	getchar();  return 0;
}