#include <stdio.h>
void ex26();
void ex27();
void ex28();
int main() {
	ex26();
	ex27();
	ex28();
	return 0;
}

void ex26() {
	printf("==========Ex26==========\n");
	int a;
	printf("32���� ���� a�� �Է� : ");
	scanf("%d", &a);
	if (a >= 32) {
		printf("a�� 32�̻��Դϴ�.\n");
	}
	else {
		printf("%d * 2 = %d\n", a, a << 1);
		printf("%d * 4 = %d\n", a, a << 2);
		printf("%d * 8 = %d\n", a, a << 3);
	}
}

void ex27() {
	printf("==========Ex27==========\n");
	int a;
	printf("8���� ū a�� �Է� : ");
	scanf("%d", &a);
	if (a <= 8) {
		printf("a�� 8�����Դϴ�.\n");
	}
	else {
		printf("%d / 2 = %d\n", a, a >> 1);
		printf("%d / 4 = %d\n", a, a >> 2);
		printf("%d / 8 = %d\n", a, a >> 3);
	}
}

void ex28() {
	printf("==========Ex28==========\n");
	int a;
	printf("a�� �Է� : ");
	scanf("%d", &a);
	if ((a % 2 == 0) || (a % 5 == 0)) {
		printf("%d * 2 * 5 = %d\n", a, a * 2 * 5);
	}
	else {
		printf("%d + 2 + 5 = %d\n", a, a + 2 + 5);
	}
}