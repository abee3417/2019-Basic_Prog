// 8-7. Write complete program for material p.60 (lecture8 : ex7)
#include <stdio.h>
int main() {
	// ip�� i�� �����Ѵ�.
	int *ip, i;
	ip = &i;
	printf("%p\n", ip); // Before
	ip = ip - 1; // ip�� �ּҰ��� 1 �����Ѵ�. �� ���� int���̹Ƿ� 4�� �����Ѵ�.
	printf("%p\n", ip); // After
	return 0;
}