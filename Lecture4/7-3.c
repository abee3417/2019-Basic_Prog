// 7-3. Write complete program for material p.31 (lecture7 : ex2)
#include <stdio.h>
int main() {
	// int형 포인터 ip를 100이 들어있는 변수 i에 연결해준다.
	int i = 100;
	int *ip;
	ip = &i;
	// ip를 출력하면 ip가 연결된 i의 주소가 나온다.
	printf("%p\n", ip);
	printf("%p\n", &i);
	// *ip를 출력하면 ip가 연결된 i의 값이 나온다.
	printf("%d\n", *ip);
	printf("%d\n", i);
	return 0;
}