// 7-4. Write complete program for material p.41 (lecture7 : ex3)
#include <stdio.h>
int main() {
	// double�� ������ dp�� 100.0�� ����ִ� ���� d�� �������ش�.
	double d = 100.0;
	double *dp;
	dp = &d;
	// dp�� ����ϸ� dp�� ����� d�� �ּҰ� ���´�.
	printf("%p\n", dp);
	printf("%p\n", &d);
	// *dp�� ����ϸ� dp�� ����� d�� ���� ���´�.
	printf("%lf\n", *dp);
	printf("%lf\n", d);
	return 0;
}