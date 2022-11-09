// 8-8. Write complete program for material p.63 (lecture8 : ex8)
#include <stdio.h>
int main() {
	int a[5] = { 1, 10, 100, 1000, 10000 }, *p, i;
	p = &(a[4]); // p를 a[4]에 연결한다.
	for (i = 4; i >= 0; i--) {
		printf("a[%d] at %p, value = %d\n", i, p, *p);
		p--; // p를 1씩 감소시키면 배열 a의 주소가 4씩 감소한다.
		// 즉, 이 경우에선 배열의 바로 왼쪽 칸으로 이동한다.
	}
	return 0;
}