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
	// Ʈ�� ���κ��� ����� ����
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
	// Ʈ�� �Ʒ��κ��� ����� ����
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
	printf("���� �׸� ���� �� : ");
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