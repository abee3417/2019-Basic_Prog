// 7-2. Write complete program for material p.30 (lecture7 : ex1)
#include <stdio.h>
int main() {
	// char형 포인터 cp를 100이 들어있는 변수 ch에 연결해준다.
	char ch = 100;
	char *cp;
	cp = &ch;
	// cp를 출력하면 cp가 연결된 ch의 주소가 나온다.
	printf("%p\n", cp);
	printf("%p\n", &ch);
	// *cp를 출력하면 cp가 연결된 ch의 값이 나온다.
	printf("%d\n", *cp);
	printf("%d\n", ch);
	return 0;
}