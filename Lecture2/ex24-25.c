#include <stdio.h>
void ex24();
void ex25();
int main() {
	ex24();
	ex25();
	return 0;
}

void ex24() {
	int a, b;
	printf("==========Ex24==========\n");
	printf("a와 b값 입력\n");
	scanf("%d%d", &a, &b);
	printf("a & b : %d\n", (a & b));
	printf("a | b : %d\n", (a | b));
	printf("~a : %d\n", ~a);
	printf("~b : %d\n", ~b);
}

void ex25() {
	printf("==========Ex25==========\n");
	int a, b, c;
	printf("a와 b, c값 입력\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("a & b & c : %x\n", (a & b & c));
	printf("a | b | c : %x\n", (a | b | c));
	printf("a & b | c : %x\n", (a & b | c));
	printf("a | b & c : %x\n", (a | b & c));
}