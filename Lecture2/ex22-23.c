#include <stdio.h>
void ex22();
void ex23();
int main() {
	ex22();
	ex23();
	return 0;
}

void ex22() {
	int i, j;
	// 트리 윗부분을 만드는 루프
	printf("==========Ex22==========\n");
	for (i = 1; i < 6; i++) {
		for (j = 5 - i; j > 0; j--) {
			printf(" ");
		}
		for (j = 0; j < (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
	// 트리 아랫부분을 만드는 루프
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf(" ");
		}
		printf("*\n");
	}
}

void ex23() {
	int i, j, n;
	printf("==========Ex23==========\n");
	printf("별을 그릴 줄의 수 : ");
	scanf("%d", &n);
	for (i = 1; i < n + 1; i++) {
		for (j = n - i; j > 0; j--) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}