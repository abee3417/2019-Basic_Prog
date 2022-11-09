#include <stdio.h>
void multiply_void(); //Ex38
int multiply_int(int a, int b); //Ex39
int main() {
	int a, b, result;
	multiply_void();
	printf("Ex39 : 두 수를 입력하세요 (multiply int ver.)\n");
	scanf("%d%d", &a, &b);
	result = multiply_int(a, b);
	printf("%d * %d = %d\n", a, b, result);
	return 0;
}

// Ex38
void multiply_void() {
	int a, b;
	printf("Ex38 : 두 수를 입력하세요 (multiply void ver.)\n");
	scanf("%d%d", &a, &b);
	printf("%d * %d = %d\n", a, b, a * b);
}

// Ex39
int multiply_int(int a, int b) {
	return (a * b);
}