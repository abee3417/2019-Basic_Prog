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
	printf("문자를 하나 입력하세요.\n");
	scanf("%c", &c);
	printf("해당 문자의 아스키코드는 0x%x입니다.\n", c);
}

void ex13() {
	int d;
	printf("==========Ex13==========\n");
	printf("아스키코드 번호를 입력하세요.\n");
	scanf("%d", &d);
	printf("해당 아스키코드는 %c입니다.\n", d);
}

void ex14() {
	int n;
	printf("==========Ex14==========\n");
	printf("숫자 하나를 입력하세요.\n");
	scanf("%d", &n);
	printf("10진수 형태 : %d\n", n);
	printf("8진수 형태 : %o\n", n);
	printf("16진수 형태 : %x\n", n);
}

void ex15() {
	printf("==========Ex15==========\n");
	printf("NULL - 10진수 : %d, 16진수 : %x\n", '\0', '\0');
	printf("BEL - 10진수 : %d, 16진수 : %x\n", '\a', '\a');
	printf("BS - 10진수 : %d, 16진수 : %x\n", '\b', '\b');
	printf("TAB - 10진수 : %d, 16진수 : %x\n", '\t', '\t');
	printf("LF - 10진수 : %d, 16진수 : %x\n", '\n', '\n');
}