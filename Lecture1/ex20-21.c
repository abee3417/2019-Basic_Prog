#include <stdio.h>
void ex20();
void ex21();
int main() {
	ex20();
	ex21();
	return 0;
}

void ex20() {
	int a, b;
	printf("==========Ex20==========\n");
	printf("숫자 2개를 입력하세요.\n");
	scanf("%d%d", &a, &b);
	if ((a > 0) && (b < 0)) {
		printf("%d + (%d) = %d\n", a, b, a + b);
	}
	else {
		printf("%d - %d = %d\n", a, b, a - b);
	}
}

void ex21() {
	int a, b;
	printf("==========Ex21==========\n");
	printf("숫자 2개를 입력하세요.\n");
	scanf("%d%d", &a, &b);
	if ((10 < (a * b)) && ((a * b) <= 20)) {
		printf("%d * %d = %d\n", a, b, a * b);
	}
	else {
		printf("%d / %d = %lf\n", a, b, a / (double)b);
		// 정확한 계산을 위해 double형으로 분수계산
	}
}