#include <stdio.h>
void add(int a, int b);
void minus(int a, int b);
void multiply(int a, int b);
int main() {
	// Ex49
	int a, b;
	printf("Ex49 : 정수 a, b값을 입력하세요.\n");
	scanf("%d%d", &a, &b);
	if (b > a) {
		add(a, b);
	}
	else {
		minus(a, b);
	}

	// Ex50
	printf("Ex50 : 정수 a, b값을 입력하세요.\n");
	scanf("%d%d", &a, &b);
	add(a, b);
	minus(a, b);
	multiply(a, b);
	return 0;
}

void add(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}

void minus(int a, int b) {
	printf("%d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
	printf("%d * %d = %d\n", a, b, a * b);
}