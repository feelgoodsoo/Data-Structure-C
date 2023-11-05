#include <stdio.h>

int main() {
	int i, length = 0;
	char str[50];
	printf("\nenter string : ");
	gets(str);  // gets_s(str);
	printf("\nentered string \n \"");
	for (i = 0; str[i]; i++) {
		printf("%c", str[i]);
		length += 1;
	}
	printf("\" \n");
	printf("\n\nentered string length = %d \n", length);

	getchar();
	return 0;
}