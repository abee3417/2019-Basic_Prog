#include <stdio.h>
void print();
int main() {
	print();
	return 0;
}

void print() {
	int a;
	printf("���� a�� �Է� : ");
	scanf("%d", &a);
	for (int i = 1; i <= 10; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
}