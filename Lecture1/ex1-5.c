#include <stdio.h>
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
int main() {
	ex1();
	ex2();
	ex3();
	ex4();
	ex5();
	return 0;
}

void ex1() {
	printf("==========Ex1==========\n");
	printf("Hello, world!\n");
}

void ex2() {
	printf("==========Ex2==========\n");
	for (int i = 0; i < 4; i++) {
		printf("Teacher is very handsome.\n");
	}
}

void ex3() {
	printf("==========Ex3==========\n");
	printf("C programming language is very fun!\n");
}

void ex4() {
	printf("==========Ex4==========\n");
	printf("Integer : %d\n", 10);
	printf("Real : %f\n", 3.14);
	printf("Character : %c\n", 'A');
	printf("String : %s\n", "C language");
}

void ex5() {
	printf("==========Ex5==========\n");
	for (int i = 1; i < 10; i++) {
		printf("3 * %d = %d\n", i, 3 * i);
	}
}