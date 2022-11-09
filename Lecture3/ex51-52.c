#include <stdio.h>
void ex51();
void ex52();
int factorial(int a); // Ex52전용 함수
int main() {
	ex51();
	ex52();
	return 0;
}

void ex51() {
	int a, print_a;
	int result = 1;
	printf("==========Ex51==========\n");
	printf("양의 정수 a값 입력 : ");
	scanf("%d", &a);
	print_a = a; // 출력 예비용으로 저장
	if (a < 1) {
		printf("양의 정수를 입력해주세요.\n");
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
	printf("양의 정수 a값 입력 : ");
	scanf("%d", &a);
	if (a < 1) {
		printf("양의 정수를 입력해주세요.\n");
	}
	else {
		printf("%d! = %d\n", a, factorial(a));
	}
	
}

int factorial(int a) { // Ex52전용 재귀함수
	if (a == 1) { // 마지막엔 1을 곱함
		return 1;
	}
	return a * factorial(a - 1);
}