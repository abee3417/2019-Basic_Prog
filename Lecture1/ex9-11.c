#include <stdio.h>
void ex9();
void ex10();
void ex11();
int main() {
	ex9();
	ex10();
	ex11();
	return 0;
}

void ex9() {
	double radius, ference, area;
	double pi = 3.141592;
	printf("==========Ex9==========\n");
	printf("�������� �Է��ϼ���.\n");
	scanf("%lf", &radius);
	ference = 2.0 * radius * pi;
	area = radius * radius * pi;
	printf("���� �ѷ��� %lf, ���̴� %lf�Դϴ�.\n", ference, area);
	return 0;
}

void ex10() {
	int Korean, English, math, totals;
	double averages;
	printf("==========Ex10==========\n");
	printf("���� ���� �Է� : ");
	scanf("%d", &Korean);
	printf("���� ���� �Է� : ");
	scanf("%d", &English);
	printf("���� ���� �Է� : ");
	scanf("%d", &math);
	totals = Korean + English + math;
	averages = totals / 3.0;
	printf("���� : %d\n", totals);
	printf("��� : %lf\n", averages);
}

void ex11() {
	int n1, n2;
	printf("==========Ex11==========\n");
	printf("���� 2���� �Է��ϼ���.\n");
	scanf("%d%d", &n1, &n2);
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %lf\n", n1, n2, n1 / (double)n2);
	// �Ҽ������� ������ ��Ȯ�� �������� ���� double������ �м����
}