// 8-5. Write complete program for material p.52 (lecture8 : ex5)
#include <stdio.h>
int main() {
	int a[5], *p, i;
	p = a; // p는 배열 a의 첫번째칸 (a[0]의 주소) 에 연결한다.
	for (i = 0; i < 5; i++) {
		// p[i]는 a[i]와 연결되있으므로 p[i]를 변경하면 a[i]가 바뀐다.
		p[i] = i * 10; // 배열의 칸마다 i * 10을 넣어준다.
		printf("a[%d] at %p, value = %d\n", i, &(a[i]), a[i]);
		// a[i]의 주소값과 값을 출력한다.
	}
	return 0;
}