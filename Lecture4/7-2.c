// 7-2. Write complete program for material p.30 (lecture7 : ex1)
#include <stdio.h>
int main() {
	// char�� ������ cp�� 100�� ����ִ� ���� ch�� �������ش�.
	char ch = 100;
	char *cp;
	cp = &ch;
	// cp�� ����ϸ� cp�� ����� ch�� �ּҰ� ���´�.
	printf("%p\n", cp);
	printf("%p\n", &ch);
	// *cp�� ����ϸ� cp�� ����� ch�� ���� ���´�.
	printf("%d\n", *cp);
	printf("%d\n", ch);
	return 0;
}