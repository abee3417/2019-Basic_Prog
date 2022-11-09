#include <stdio.h>
void min_void(); //Ex42
int min_int(int a, int b, int c); //Ex43
int main() {
	int a, b, c, result;
	min_void();
	printf("Ex43 : 세 수를 입력하세요 (min int ver.)\n");
	scanf("%d%d%d", &a, &b, &c);
	result = min_int(a, b, c);
	printf("가장 작은 값은 %d입니다.\n", result);
	return 0;
}

// Ex42
void min_void() {
	int a, b, c, min;
	printf("Ex42 : 세 수를 입력하세요 (min void ver.)\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	printf("가장 작은 값은 %d입니다.\n", min);
}

// Ex43
int min_int(int a, int b, int c) {
	int min;
	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}
	if (c < min) {
		return c;
	}
	else {
		return min;
	}
}