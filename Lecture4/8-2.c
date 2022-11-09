// 8-2. Write complete program for material p.12 (lecture8 : ex2)
#include <stdio.h>
int main() {
	// int형 포인터 ip를 주소가 200인 메모리에 연결
	int *ip = 200;
	printf("%d\n", *ip); // 연결이 잘못 되었기 때문에 출력 오류가 발생한다.
	return 0;
}