// 8-9. Write complete program for material p.66 (lecture8 : ex9)
#include <stdio.h>
int main() {
	int a[5] = { 1, 10, 100, 1000, 10000 }, *p, i;
	p = a; // p�� a[0]�� �����Ѵ�.
	for (i = 0; i < 5; i++) {
		// �Ʒ��� �� ������ ���� ����� ��µȴ�.
		// ������ ���� +1 �Ҷ����� ����� �迭 a�� int���̹Ƿ� +4�� �����Ѵ�.
		printf("a[%d] at %p, value = %d\n", i, &(a[i]), a[i]);
		printf("p+%d at %p, value = %d\n", i, p + i, *(p + i));
	}
	return 0;
}