#include <stdio.h>
int main() {
	int a = 10, b = 20, c = 30;
	int *ptrs[] = { &a, &b, &c };
	int **pptr = ptrs;
	printf("%d\n", *ptrs[0]);
	printf("%d\n", *pptr[0]);
	// ptrs�� �ּҷ� �� �� �� �ּҰ� ����Ű�� ������ �̵�
	// �迭�� �������̱� ������ ���������Ͷ� �����ϸ� �ȴ�.
	printf("%d\n", **(pptr + 1));
	// 20
	printf("%d %d\n", *(pptr + 1), &b);
	// ptrs[1]�� �����ϴ� �ּҰ� = b�� �ּҰ�
	printf("%d\n", *(*pptr + 1));
	// �����ʹ� 8����Ʈ�̱⿡ 4����Ʈ ������ �޸𸮴� ��
	printf("%d\n", **pptr + 1);
	// 10 + 1 = 11
	return 0;
}