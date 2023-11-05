#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"

int main(void) {
	int result;
	char* express = "35*62/-";
	printf("postfix notation : %s", express);

	result = evalPostfix(express);
	printf("\n\ncalc result => %d\n", result);

	getchar();  return 0;
}