#include <stdio.h>
void ex16();
void ex17();
void ex18();
void ex19();
int main() {
	ex16();
	ex17();
	ex18();
	ex19();
	return 0;
}

void ex16() {
	int a, b;
	printf("==========Ex16==========\n");
	printf("���� 2���� �Է��ϼ���.\n");
	scanf("%d%d", &a, &b);
	if (a == b) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void ex17() {
	int a, b;
	printf("==========Ex17==========\n");
	printf("���� �ٸ� ���� 2���� �Է��ϼ���.\n");
	scanf("%d%d", &a, &b);
	if (a == b) {
		printf("ERROR : ���� ���� �Է�\n");
	}
	else if (a > b) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void ex18() {
	int a, b, c;
	printf("==========Ex18==========\n");
	printf("���� 3���� �Է��ϼ���.\n");
	scanf("%d%d%d", &a, &b, &c);
	if ((a == 0) || (b == 0) || (c == 0)) {
		printf("0\n");
	}
	else {
		printf("1\n");
	}
}

void ex19() {
	int a, b, c;
	printf("==========Ex19==========\n");
	printf("���� 3���� �Է��ϼ���.\n");
	scanf("%d%d%d", &a, &b, &c);
	if ((a == 0) && (b == 0) && (c == 0)) {
		printf("0\n");
	}
	else {
		printf("1\n");
	}
}