// 8-4. Write complete program for material p.40 (lecture8 : ex4)
#include <stdio.h>
int main() {
	int a[5], *p1, *p2, i;
	p1 = a; // p1은 배열 a의 첫번째칸 (a[0]의 주소) 에 연결한다.
	p2 = &(a[2]); // p2는 a[2]의 주소에 연결한다.
	for (i = 0; i < 5; i++) {
		a[i] = i;
		// a[i]의 주소와 들어있는 값을 출력한다.
		printf("a[%d] at %p, value=%d\n", i, &(a[i]), a[i]);
	}
	printf("p1 = %p\n", p1); // p1과 연결되있는 a[0]의 주소를 출력한다.
	printf("*p1 = %d\n", *p1); // p1과 연결되있는 a[0]의 값인 0을 출력한다.
	*p2 = (*p2 + 100); // p2와 연결되있는 a[2]의 값인 2에 100을 더해준다.
	printf("p2 = %p\n", p2); // p2와 연결되있는 a[2]의 주소를 출력한다.
	printf("*p2 = %d\n", *p2); // p1과 연결되있는 a[0]의 값인 102를 출력한다.
	return 0;
}