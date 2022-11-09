// 7-4. Write complete program for material p.41 (lecture7 : ex3)
#include <stdio.h>
int main() {
	// double형 포인터 dp를 100.0이 들어있는 변수 d에 연결해준다.
	double d = 100.0;
	double *dp;
	dp = &d;
	// dp를 출력하면 dp가 연결된 d의 주소가 나온다.
	printf("%p\n", dp);
	printf("%p\n", &d);
	// *dp를 출력하면 dp가 연결된 d의 값이 나온다.
	printf("%lf\n", *dp);
	printf("%lf\n", d);
	return 0;
}