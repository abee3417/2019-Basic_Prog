// 8-5. Write complete program for material p.52 (lecture8 : ex5)
#include <stdio.h>
int main() {
	int a[5], *p, i;
	p = a; // p�� �迭 a�� ù��°ĭ (a[0]�� �ּ�) �� �����Ѵ�.
	for (i = 0; i < 5; i++) {
		// p[i]�� a[i]�� ����������Ƿ� p[i]�� �����ϸ� a[i]�� �ٲ��.
		p[i] = i * 10; // �迭�� ĭ���� i * 10�� �־��ش�.
		printf("a[%d] at %p, value = %d\n", i, &(a[i]), a[i]);
		// a[i]�� �ּҰ��� ���� ����Ѵ�.
	}
	return 0;
}