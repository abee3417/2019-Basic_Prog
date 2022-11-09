#include <stdio.h>
void printToAFrom0(); //Ex46
void printToBFromA(); //Ex47
int main() {
	printToAFrom0();
	printToBFromA();
	return 0;
}

// Ex46
void printToAFrom0() {
	int a;
	printf("Ex46 : 정수 a값 하나를 입력하세요.\n");
	scanf("%d", &a);
	for (int i = 1; i < a; i++) { // 0초과 a미만 정수 출력
		printf("%d ", i);
	}
	printf("\n");
}

// Ex47
void printToBFromA() {
	int a, b;
	printf("Ex47 : 정수 a, b값을 입력하세요.\n");
	scanf("%d%d", &a, &b);
	if (a < b) {
		for (int i = a + 1; i < b; i++) { // a초과 b미만 정수 출력
			printf("%d ", i);
		}
	}
	else {
		for (int i = b + 1; i < a; i++) { // b초과 a미만 정수 출력
			printf("%d ", i);
		}
	}
	printf("\n");
}