// 8-3. Write complete program for material p.17 (lecture8 : ex3)
#include <stdio.h>
int main() {
	// ip�� i�� �ùٸ��� ���� �� ��
	int *ip, i;
	ip = &i;
	*ip = 100; // *ip���� �ٲٸ� ������ִ� i�� ���� ����ȴ�.
	printf("%d\n", i); // ���� ���������� 100�� ��µȴ�.
	return 0;
}