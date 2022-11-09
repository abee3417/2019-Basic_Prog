// 8-1. Write complete program for material p.8 (lecture8 : ex1)
#include <stdio.h>
int main() {
	// int형 포인터 ip를 i의 값과 같은 주소를 가진 메모리에 연결해준다.
	// 즉, 주소가 100인 메모리에 연결한다.
	int i = 100;
	int *ip;
	ip = i;
	printf("%d\n", *ip); // 연결이 잘못 되었기 때문에 출력 오류가 발생한다.
	return 0;
}