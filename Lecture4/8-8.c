// 8-8. Write complete program for material p.63 (lecture8 : ex8)
#include <stdio.h>
int main() {
	int a[5] = { 1, 10, 100, 1000, 10000 }, *p, i;
	p = &(a[4]); // p�� a[4]�� �����Ѵ�.
	for (i = 4; i >= 0; i--) {
		printf("a[%d] at %p, value = %d\n", i, p, *p);
		p--; // p�� 1�� ���ҽ�Ű�� �迭 a�� �ּҰ� 4�� �����Ѵ�.
		// ��, �� ��쿡�� �迭�� �ٷ� ���� ĭ���� �̵��Ѵ�.
	}
	return 0;
}