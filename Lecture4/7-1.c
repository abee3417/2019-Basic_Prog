// 7-1. Write a program to check pointer variable size of you PC.
#include <stdio.h>
int main() {
	int *p;
	char *q;
	double *m;
	float *n;
	// �� ��ǻ�� �������δ� ��� �������� ũ�Ⱑ ��� 4�� ��µȴ�.
	printf("%d %d %d %d\n", sizeof(p), sizeof(q), sizeof(m), sizeof(n));
	return 0;
}