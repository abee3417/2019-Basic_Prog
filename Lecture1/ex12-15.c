#include <stdio.h>
void ex12();
void ex13();
void ex14();
void ex15();
int main() {
	ex12();
	ex13();
	ex14();
	ex15();
	return 0;
}

void ex12() {
	char c;
	printf("==========Ex12==========\n");
	printf("���ڸ� �ϳ� �Է��ϼ���.\n");
	scanf("%c", &c);
	printf("�ش� ������ �ƽ�Ű�ڵ�� 0x%x�Դϴ�.\n", c);
}

void ex13() {
	int d;
	printf("==========Ex13==========\n");
	printf("�ƽ�Ű�ڵ� ��ȣ�� �Է��ϼ���.\n");
	scanf("%d", &d);
	printf("�ش� �ƽ�Ű�ڵ�� %c�Դϴ�.\n", d);
}

void ex14() {
	int n;
	printf("==========Ex14==========\n");
	printf("���� �ϳ��� �Է��ϼ���.\n");
	scanf("%d", &n);
	printf("10���� ���� : %d\n", n);
	printf("8���� ���� : %o\n", n);
	printf("16���� ���� : %x\n", n);
}

void ex15() {
	printf("==========Ex15==========\n");
	printf("NULL - 10���� : %d, 16���� : %x\n", '\0', '\0');
	printf("BEL - 10���� : %d, 16���� : %x\n", '\a', '\a');
	printf("BS - 10���� : %d, 16���� : %x\n", '\b', '\b');
	printf("TAB - 10���� : %d, 16���� : %x\n", '\t', '\t');
	printf("LF - 10���� : %d, 16���� : %x\n", '\n', '\n');
}