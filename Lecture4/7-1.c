// 7-1. Write a program to check pointer variable size of you PC.
#include <stdio.h>
int main() {
	int *p;
	char *q;
	double *m;
	float *n;
	// 집 컴퓨터 기준으로는 모든 포인터의 크기가 모두 4로 출력된다.
	printf("%d %d %d %d\n", sizeof(p), sizeof(q), sizeof(m), sizeof(n));
	return 0;
}