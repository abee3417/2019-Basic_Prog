#include <stdio.h>
void ex6();
void ex7();
void ex8();
int main() {
	ex6();
	ex7();
	ex8();
	return 0;
}

void ex6() {
	int a = 1;
	int b = 2;
	int c = 3;
	printf("==========Ex6==========\n");
	printf("a + b + c = %d\n", a + b + c);
	printf("a - b + c = %d\n", a - b + c);
	printf("a * b * c = %d\n", a * b * c);
	printf("a * b - c = %d\n", a * b - c);
	printf("a + b * c = %d\n", a + b * c);
}

void ex7() {
	double height, weight, standard, gap;
	printf("==========Ex7==========\n");
	printf("Ű�� �Է��ϼ���.\n");
	scanf("%lf", &height);
	printf("�����Ը� �Է��ϼ���.\n");
	scanf("%lf", &weight);
	standard = (height - 100) * 0.9;
	gap = weight - standard;
	printf("ü�߰� ǥ�� ü���� ���̴� %+.2lf�Դϴ�.\n", gap);
}

void ex8() {
	double C, F;
	printf("==========Ex8==========\n");
	printf("ȭ���µ��� �Է��ϼ���.\n");
	scanf("%lf", &F);
	C = (5.0 / 9.0) * (F - 32.0);
	printf("�����µ��� %lf�Դϴ�.\n", C);
}