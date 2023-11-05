#include <stdio.h>

int main() {
	int i;
	// 1차원 배열 초기화
	int score[3] = { 91, 86, 97 };
	char grade[3] = { 'A','B','A' };

	printf("\n *** Earned credits by grade *** \n\n");

	for (i = 0; i < 3; i++) {
		printf("%3dyear : score = %d, rating = %c\n", i + 1, score[i], grade[i]);
	}

	getchar();
	return 0;
}