#include <stdio.h>
void ex51();
void ex52();
int factorial(int a); // Ex52���� �Լ�
int main() {
	ex51();
	ex52();
	return 0;
}

void ex51() {
	int a, print_a;
	int result = 1;
	printf("==========Ex51==========\n");
	printf("���� ���� a�� �Է� : ");
	scanf("%d", &a);
	print_a = a; // ��� ��������� ����
	if (a < 1) {
		printf("���� ������ �Է����ּ���.\n");
	}
	else {
		while (a > 0) {
			result *= a;
			a--;
		}
	}
	printf("%d! = %d\n", print_a, result);
}

void ex52() {
	int a;
	int result = 1;
	printf("==========Ex52==========\n");
	printf("���� ���� a�� �Է� : ");
	scanf("%d", &a);
	if (a < 1) {
		printf("���� ������ �Է����ּ���.\n");
	}
	else {
		printf("%d! = %d\n", a, factorial(a));
	}
	
}

int factorial(int a) { // Ex52���� ����Լ�
	if (a == 1) { // �������� 1�� ����
		return 1;
	}
	return a * factorial(a - 1);
}