// 8-3. Write complete program for material p.17 (lecture8 : ex3)
#include <stdio.h>
int main() {
	// ip를 i에 올바르게 연결 한 후
	int *ip, i;
	ip = &i;
	*ip = 100; // *ip값을 바꾸면 연결되있는 i의 값이 변경된다.
	printf("%d\n", i); // 따라서 정상적으로 100이 출력된다.
	return 0;
}