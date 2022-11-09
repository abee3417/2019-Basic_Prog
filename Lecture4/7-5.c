// 7-5. Write complete program for material p.57 (lecture7 : ex4)
#include <stdio.h>
int main() {
	// int형 포인터 ip를 100이 들어있는 변수 i에 연결해준다.
	int i = 100;
	int *ip;
	ip = &i;
	printf("%d\n", i); // i의 값
	printf("%p\n", ip); // ip의 값 = i의 주소
	printf("%p\n", &i); // i의 주소 = ip의 값
	printf("%d\n", *ip); // *ip의 값 = i의 값
	printf("%p\n", &ip); // ip의 주소
	return 0;
}