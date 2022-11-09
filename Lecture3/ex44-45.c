#include <stdio.h>
void printSentence1(); //Ex44
void printSentence2(int a); //Ex45
int main() {
	int a;
	printSentence1();
	printf("Ex45 : 문장을 반복할 횟수를 입력하세요. (Parameter ver.)\n");
	scanf("%d", &a);
	printSentence2(a);
	return 0;
}

// Ex44
void printSentence1() {
	int a;
	printf("Ex44 : 문장을 반복할 횟수를 입력하세요. (No parameter ver.)\n");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("Teacher is very handsome.\n");
	}
}

// Ex45
void printSentence2(int a) {
	for (int i = 0; i < a; i++) {
		printf("Teacher is very handsome.\n");
	}
}