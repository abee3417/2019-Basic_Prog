#include <stdio.h>
#include <stdlib.h>
void ex29();
void ex30();
void ex31();
int main() {
	ex29();
	ex30();
	ex31();
	return 0;
}

void ex29() {
	printf("==========Ex29==========\n");
	int a, b;
	printf("�� ������ �Է��ϼ���.\n");
	scanf("%d%d", &a, &b);
	if (abs(a) > abs(b)) {
		printf("%d�� ������ �� Ů�ϴ�.\n", a);
	}
	else if (abs(a) < abs(b)) {
		printf("%d�� ������ �� Ů�ϴ�.\n", b);
	}
	else {
		printf("������ ���� �����ϴ�.\n");
	}
}

void ex30() {
	printf("==========Ex30==========\n");
	int a, b;
	printf("�� ������ �Է��ϼ���.\n");
	scanf("%d%d", &a, &b);
	if (abs(a) < abs(b)) {
		printf("%d�� ������ �� �۽��ϴ�.\n", a);
	}
	else if (abs(a) > abs(b)) {
		printf("%d�� ������ �� �۽��ϴ�.\n", b);
	}
	else {
		printf("������ ���� �����ϴ�.\n");
	}
}

void ex31() {
	printf("==========Ex31==========\n");
	int a, b;
	printf("�� ������ �Է��ϼ���.\n");
	scanf("%d%d", &a, &b);
	printf("�� ������ �� : %d\n", abs(a) + abs(b));
}