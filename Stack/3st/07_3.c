#include <stdio.h>
#include <stdlib.h>
#include "stackL.h"
#include "testPair.h"

int main(void) {
	char* express = "{(A+B)-3}*5+[{cos(x+y)+7}-1]*4";
	printf("%s", express);

	if (testPair(express) == 1)
		printf("\n\ncorrect function!\n");
	else
		printf("\n\ninvalid function!\n");

	getchar();  return 0;
}