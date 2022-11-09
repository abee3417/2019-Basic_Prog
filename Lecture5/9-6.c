#include <stdio.h>
int main() {
	// 포인터 배열
	char *ptr[3]; // 여기엔 반드시 주소값만 들어가야된다. 정수 이런거 x
	char *test[10];
	ptr[0] = "Scarlett Johansson"; // 저 문장의 주소값이 들어간다.
	ptr[1] = "Taylor Swift";
	ptr[2] = "Emma Watson";
	for (int i = 0; i < 3; i++) {
		printf("ptr[%d] = %p, %s\n", i, ptr[i], ptr[i]);
		// 주의 : 포인터 배열에서 %s를 쓰고 싶으면 저렇게 쓰자. *ptr[i]는 x
		printf("%c\n", *ptr[i]);
		printf("%c\n", *(ptr[i] + 1));
		// 한 단어를 출력하고 싶으면 이렇게.
		// 혹은 ptr[i][1] 이런식도 가능.
	}
	printf("테스트 문장 입력 : ");
	scanf("%[^\n]s", test);
	printf("테스트 문장 : %s\n", test);
	return 0;
}