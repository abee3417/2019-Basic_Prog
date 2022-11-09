#include <stdio.h>
void add10And20(); //Ex33
void add_void(); //Ex34
int add_int(int a, int b); //Ex35
int main() {
	int a, b, result;
	add10And20();
	add_void();
	printf("Ex35 : 두 수를 입력하세요 (add int ver.)\n");
	scanf("%d%d", &a, &b);
	result = add_int(a, b);
	printf("%d + %d = %d\n", a, b, result);
	return 0;
}

// Ex33
void add10And20() {
	printf("Ex33 : 10 + 20 = %d\n", 10 + 20);
}

// Ex34
void add_void() {
	int a, b;
	printf("Ex34 : 두 수를 입력하세요 (add void ver.)\n");
	scanf("%d%d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
}

// Ex35
int add_int(int a, int b) {
	return (a + b);
}