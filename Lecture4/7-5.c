// 7-5. Write complete program for material p.57 (lecture7 : ex4)
#include <stdio.h>
int main() {
	// int�� ������ ip�� 100�� ����ִ� ���� i�� �������ش�.
	int i = 100;
	int *ip;
	ip = &i;
	printf("%d\n", i); // i�� ��
	printf("%p\n", ip); // ip�� �� = i�� �ּ�
	printf("%p\n", &i); // i�� �ּ� = ip�� ��
	printf("%d\n", *ip); // *ip�� �� = i�� ��
	printf("%p\n", &ip); // ip�� �ּ�
	return 0;
}