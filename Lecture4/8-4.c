// 8-4. Write complete program for material p.40 (lecture8 : ex4)
#include <stdio.h>
int main() {
	int a[5], *p1, *p2, i;
	p1 = a; // p1�� �迭 a�� ù��°ĭ (a[0]�� �ּ�) �� �����Ѵ�.
	p2 = &(a[2]); // p2�� a[2]�� �ּҿ� �����Ѵ�.
	for (i = 0; i < 5; i++) {
		a[i] = i;
		// a[i]�� �ּҿ� ����ִ� ���� ����Ѵ�.
		printf("a[%d] at %p, value=%d\n", i, &(a[i]), a[i]);
	}
	printf("p1 = %p\n", p1); // p1�� ������ִ� a[0]�� �ּҸ� ����Ѵ�.
	printf("*p1 = %d\n", *p1); // p1�� ������ִ� a[0]�� ���� 0�� ����Ѵ�.
	*p2 = (*p2 + 100); // p2�� ������ִ� a[2]�� ���� 2�� 100�� �����ش�.
	printf("p2 = %p\n", p2); // p2�� ������ִ� a[2]�� �ּҸ� ����Ѵ�.
	printf("*p2 = %d\n", *p2); // p1�� ������ִ� a[0]�� ���� 102�� ����Ѵ�.
	return 0;
}