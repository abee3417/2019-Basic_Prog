// 7-3. Write complete program for material p.31 (lecture7 : ex2)
#include <stdio.h>
int main() {
	// int�� ������ ip�� 100�� ����ִ� ���� i�� �������ش�.
	int i = 100;
	int *ip;
	ip = &i;
	// ip�� ����ϸ� ip�� ����� i�� �ּҰ� ���´�.
	printf("%p\n", ip);
	printf("%p\n", &i);
	// *ip�� ����ϸ� ip�� ����� i�� ���� ���´�.
	printf("%d\n", *ip);
	printf("%d\n", i);
	return 0;
}