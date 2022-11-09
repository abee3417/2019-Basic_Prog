#include <stdio.h>
int main() {
	int a = 10, b = 20, c = 30;
	int *ptrs[] = { &a, &b, &c };
	int **pptr = ptrs;
	printf("%d\n", *ptrs[0]);
	printf("%d\n", *pptr[0]);
	// ptrs의 주소로 간 후 그 주소가 가르키는 값으로 이동
	// 배열도 포인터이기 때문에 더블포인터라 생각하면 된다.
	printf("%d\n", **(pptr + 1));
	// 20
	printf("%d %d\n", *(pptr + 1), &b);
	// ptrs[1]에 존재하는 주소값 = b의 주소값
	printf("%d\n", *(*pptr + 1));
	// 포인터는 8바이트이기에 4바이트 증가한 메모리는 모름
	printf("%d\n", **pptr + 1);
	// 10 + 1 = 11
	return 0;
}