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
	printf("두 정수를 입력하세요.\n");
	scanf("%d%d", &a, &b);
	if (abs(a) > abs(b)) {
		printf("%d의 절댓값이 더 큽니다.\n", a);
	}
	else if (abs(a) < abs(b)) {
		printf("%d의 절댓값이 더 큽니다.\n", b);
	}
	else {
		printf("절댓값이 서로 같습니다.\n");
	}
}

void ex30() {
	printf("==========Ex30==========\n");
	int a, b;
	printf("두 정수를 입력하세요.\n");
	scanf("%d%d", &a, &b);
	if (abs(a) < abs(b)) {
		printf("%d의 절댓값이 더 작습니다.\n", a);
	}
	else if (abs(a) > abs(b)) {
		printf("%d의 절댓값이 더 작습니다.\n", b);
	}
	else {
		printf("절댓값이 서로 같습니다.\n");
	}
}

void ex31() {
	printf("==========Ex31==========\n");
	int a, b;
	printf("두 정수를 입력하세요.\n");
	scanf("%d%d", &a, &b);
	printf("두 절댓값의 합 : %d\n", abs(a) + abs(b));
}