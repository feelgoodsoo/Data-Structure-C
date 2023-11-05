#include <stdio.h>
#include <stdlib.h>
#include "deQue.h"

int main(void)
{
	DQueType* DQ1 = createDQue();  // 单农 积己
	element data;
	printf("\n ***** deQue Calc ***** \n");
	printf("\n front Insert A>> ");  insertFront(DQ1, 'A');  printDQ(DQ1);
	printf("\n front Insert B>> ");  insertFront(DQ1, 'B');  printDQ(DQ1);
	printf("\n rear  Insert C>> ");  insertRear(DQ1, 'C');  printDQ(DQ1);
	printf("\n front Delete  >> ");  data = deleteFront(DQ1);    printDQ(DQ1);
	printf("\tDelete Data: %c", data);
	printf("\n rear  Delete  >> ");  data = deleteRear(DQ1);     printDQ(DQ1);
	printf("\t\tDelete Data: %c", data);
	printf("\n rear  Insert D>> ");  insertRear(DQ1, 'D');  printDQ(DQ1);
	printf("\n front Insert E>> ");  insertFront(DQ1, 'E');  printDQ(DQ1);
	printf("\n front Insert F>> ");  insertFront(DQ1, 'F');  printDQ(DQ1);

	data = peekFront(DQ1);  printf("\n peek Front item : %c \n", data);
	data = peekRear(DQ1);  printf(" peek Rear item : %c \n", data);

	getchar();  return 0;
}