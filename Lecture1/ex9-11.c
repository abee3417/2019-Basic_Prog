#include <stdio.h>
void ex9();
void ex10();
void ex11();
int main() {
	ex9();
	ex10();
	ex11();
	return 0;
}

void ex9() {
	double radius, ference, area;
	double pi = 3.141592;
	printf("==========Ex9==========\n");
	printf("반지름을 입력하세요.\n");
	scanf("%lf", &radius);
	ference = 2.0 * radius * pi;
	area = radius * radius * pi;
	printf("원의 둘레는 %lf, 넓이는 %lf입니다.\n", ference, area);
	return 0;
}

void ex10() {
	int Korean, English, math, totals;
	double averages;
	printf("==========Ex10==========\n");
	printf("국어 점수 입력 : ");
	scanf("%d", &Korean);
	printf("영어 점수 입력 : ");
	scanf("%d", &English);
	printf("수학 점수 입력 : ");
	scanf("%d", &math);
	totals = Korean + English + math;
	averages = totals / 3.0;
	printf("총합 : %d\n", totals);
	printf("평균 : %lf\n", averages);
}

void ex11() {
	int n1, n2;
	printf("==========Ex11==========\n");
	printf("숫자 2개를 입력하세요.\n");
	scanf("%d%d", &n1, &n2);
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %lf\n", n1, n2, n1 / (double)n2);
	// 소숫점까지 나오는 정확한 나눗셈을 위해 double형으로 분수계산
}