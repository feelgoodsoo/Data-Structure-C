#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct employee {
	char name[20];
	int year;
	int pay;
};

int main() {
	struct employee Lee;
	struct employee* Sptr = &Lee;
	
    strcpy(Sptr->name, "hyolee LEE");
	 Sptr->year = 2023;
	 Sptr->pay = 5900;

	printf("\n name : %s", Sptr->name);
	printf("\n join : %d", Sptr->year);
	printf("\n salary : %d", Sptr->pay);
	getchar();
	return 0;
}