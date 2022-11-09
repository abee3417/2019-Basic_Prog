#include <stdio.h>
int *getNum(int n) {
	int* r = (int*)malloc(sizeof(int) * n);
	//static int r[10];
	for (int i = 0; i < 10; i++) {
		*(r + i) = i + 10;
	}
	return r;
}
int main() {
	int *p;
	int i;
	p = getNum(10);
	for (i = 0; i < 10; i++) {
		printf("p[%d] : %d\n", i, p[i]);
	}
	//free(p);
	return 0;
}