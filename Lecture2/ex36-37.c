#include <stdio.h>
void minus_void(); //Ex36
int minus_int(int a, int b); //Ex37
int main() {
	int a, b, result;
	minus_void();
	printf("Ex37 : 두 수를 입력하세요 (minus int ver.)\n");
	scanf("%d%d", &a, &b);
	result = minus_int(a, b);
	printf("%d - %d = %d\n", a, b, result);
	return 0;
}

// Ex36
void minus_void() {
	int a, b;
	printf("Ex36 : 두 수를 입력하세요 (minus void ver.)\n");
	scanf("%d%d", &a, &b);
	printf("%d - %d = %d\n", a, b, a - b);
}

// Ex37
int minus_int(int a, int b) {
	return (a - b);
}