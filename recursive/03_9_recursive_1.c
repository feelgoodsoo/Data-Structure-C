#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int);

void main() {
	int n, result;
	printf("\n enter number : ");
	scanf("%d", &n);
	result = fact(n);
	printf("\n\n %d factorial value is %ld \n", n, result);
	getchar(); getchar();
}

long int fact(int n) {
	int value;
	if (n <= 1) {
		printf("\n fact(1) function called!");
		printf("\n fact(1) value 1 returned!!");
		return 1;
	}
	else {
		printf("\n fact(%d) function called!", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) value %ld returned!!", n, value);
		return value;
	}
}