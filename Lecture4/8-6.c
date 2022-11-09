// 8-6. Write complete program for material p.56 (lecture8 : ex6)
#include <stdio.h>
int main() {
	// ip를 i에 연결한다.
	int *ip, i;
	ip = &i;
	printf("%p\n", ip); // Before
	ip = ip + 1; // ip의 주소값이 1 증가한다. 이 경우는 int형이므로 4씩 증가한다.
	printf("%p\n", ip); // After
	return 0;
}