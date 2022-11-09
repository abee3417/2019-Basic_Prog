// 8-7. Write complete program for material p.60 (lecture8 : ex7)
#include <stdio.h>
int main() {
	// ip를 i에 연결한다.
	int *ip, i;
	ip = &i;
	printf("%p\n", ip); // Before
	ip = ip - 1; // ip의 주소값이 1 감소한다. 이 경우는 int형이므로 4씩 감소한다.
	printf("%p\n", ip); // After
	return 0;
}