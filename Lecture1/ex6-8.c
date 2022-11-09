#include <stdio.h>
void ex6();
void ex7();
void ex8();
int main() {
	ex6();
	ex7();
	ex8();
	return 0;
}

void ex6() {
	int a = 1;
	int b = 2;
	int c = 3;
	printf("==========Ex6==========\n");
	printf("a + b + c = %d\n", a + b + c);
	printf("a - b + c = %d\n", a - b + c);
	printf("a * b * c = %d\n", a * b * c);
	printf("a * b - c = %d\n", a * b - c);
	printf("a + b * c = %d\n", a + b * c);
}

void ex7() {
	double height, weight, standard, gap;
	printf("==========Ex7==========\n");
	printf("키를 입력하세요.\n");
	scanf("%lf", &height);
	printf("몸무게를 입력하세요.\n");
	scanf("%lf", &weight);
	standard = (height - 100) * 0.9;
	gap = weight - standard;
	printf("체중과 표준 체중의 차이는 %+.2lf입니다.\n", gap);
}

void ex8() {
	double C, F;
	printf("==========Ex8==========\n");
	printf("화씨온도를 입력하세요.\n");
	scanf("%lf", &F);
	C = (5.0 / 9.0) * (F - 32.0);
	printf("섭씨온도는 %lf입니다.\n", C);
}