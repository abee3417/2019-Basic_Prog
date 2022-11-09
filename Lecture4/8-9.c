// 8-9. Write complete program for material p.66 (lecture8 : ex9)
#include <stdio.h>
int main() {
	int a[5] = { 1, 10, 100, 1000, 10000 }, *p, i;
	p = a; // p를 a[0]에 연결한다.
	for (i = 0; i < 5; i++) {
		// 아래의 두 문장은 같은 결과가 출력된다.
		// 포인터 값을 +1 할때마다 연결된 배열 a는 int형이므로 +4씩 증가한다.
		printf("a[%d] at %p, value = %d\n", i, &(a[i]), a[i]);
		printf("p+%d at %p, value = %d\n", i, p + i, *(p + i));
	}
	return 0;
}