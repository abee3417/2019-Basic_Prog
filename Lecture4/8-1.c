// 8-1. Write complete program for material p.8 (lecture8 : ex1)
#include <stdio.h>
int main() {
	// int�� ������ ip�� i�� ���� ���� �ּҸ� ���� �޸𸮿� �������ش�.
	// ��, �ּҰ� 100�� �޸𸮿� �����Ѵ�.
	int i = 100;
	int *ip;
	ip = i;
	printf("%d\n", *ip); // ������ �߸� �Ǿ��� ������ ��� ������ �߻��Ѵ�.
	return 0;
}