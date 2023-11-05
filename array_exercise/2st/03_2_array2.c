#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0, n;
	int multiply[9];

	printf("\nenter number between 1~9 : ");

	while (1) {
		scanf("%d", &n);
		if (n < 0 || n>9)
			printf("\nenter number between 1~9 : ");
		else
			break;
	}

	printf("\n");
	for (i = 0; i < 9; i++) {
		multiply[i] = n * (i + 1);
		printf(" %d * %d = %d \n", n, (i + 1), multiply[i]);
	}

	getchar(); getchar();
	return 0;
}
