#include <stdio.h>
int main() {
	char str1[] = "My String"; // 일반적인 문자열
	char *str2 = "Your String"; // 문자열을 가르키고 있는 포인터
	printf("%c\n", str1); // 다른 배열처럼 인덱스 안넣으면 처음꺼x
	printf("%c\n", str1[0]); // 이렇게 넣어줘야한다. 'M' 출력
	printf("%c\n", str1[9]); // '\0' 출력
	printf("%c\n", *(str2 + 1)); // 'o' 출력
	*str1 = 'X'; // 가능하다. str1[0]이 바뀜
	// *str2 = 'X';
	// 불가능. 이런 배열을 가르키는 포인터의 배열은 고정값
	printf("%c\n", *str1); // 'X' 출력
	printf("%c\n", str2[0]); // 'Y' 출력
	// str1 = str2;
	// 불가능. 역시나 위와 같은 이유
	str2 = str1; // 이거는 가능하다.
	printf("%c\n", *str1); // 'X' 출력
	printf("%c\n", str2[0]); // 'X' 출력
	str2[0] = '1';
	// 할당관계이기 때문에 똑같이 바뀐다.
	printf("%c\n", *str1); // '1' 출력
	printf("%c\n", str2[0]); // '1' 출력
	str2 = "Our String";
	// "Your String"에 연결을 끊고 "Our String"에 연결한다. 가능.
	printf("%p\n", str1);
	printf("%p\n", str2);
	printf("%s\n", str1); // %s를 쓰고 그냥 변수이름을 쓰면 문자열 출력
	printf("%s\n", str2); // 이것도 마찬가지.
	printf("%c\n", *(str1 + 1)); // 'y' 출력
	printf("%c\n", *(str2 + 1)); // 'u' 출력
	return 0;
}