#include <stdio.h>

void main() {
	char* ptrArray[2];
	char** ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;
	printf("\n ptrArray[0] address (&ptrArray[0]) = %u", &ptrArray[0]);
	printf("\n ptrArray[0] value (ptrArray[0]) = %u", ptrArray[0]);
	printf("\n ptrArray[0] reference (*ptrArray[0]) = %c", *ptrArray[0]);
	printf("\n ptrArray[0] ref string (*ptrArray[0]) = %s \n", *ptrArray);

	printf("\n ptrArray[1] address (&ptrArray[1]) = %u", &ptrArray[1]);
	printf("\n ptrArray[1] value (ptrArray[1]) = %u", ptrArray[1]);
	printf("\n ptrArray[1] reference (*ptrArray[1]) = %c", *ptrArray[1]);
	printf("\n ptrArray[1] ref string(*ptrArray[1])= %s \n", *(ptrArray + 1));

	printf("\n ptrptr address (&ptrptr) = %u", &ptrptr);
	printf("\n ptrptr value (ptrptr) = %u", ptrptr);
	printf("\n ptrptr¿« 1st reference ( *ptrptr) = %u", *ptrptr);
	printf("\n ptrptr¿« 2st reference (**ptrptr) = %c", **ptrptr);
	printf("\n ptrptr¿« 2st ref string (**ptrptr) = %s", *ptrptr);

	printf("\n\n *ptrArray[0] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[0] + i));
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*ptrptr + i));

	printf("\n\n *ptrArray[1] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[1] + i));
	printf("\n **(ptrptr+1) : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*(ptrptr + 1) + i));

	getchar();
}