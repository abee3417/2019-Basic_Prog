#include <stdio.h>
void printToAFrom0(); //Ex46
void printToBFromA(); //Ex47
int main() {
	printToAFrom0();
	printToBFromA();
	return 0;
}

// Ex46
void printToAFrom0() {
	int a;
	printf("Ex46 : ���� a�� �ϳ��� �Է��ϼ���.\n");
	scanf("%d", &a);
	for (int i = 1; i < a; i++) { // 0�ʰ� a�̸� ���� ���
		printf("%d ", i);
	}
	printf("\n");
}

// Ex47
void printToBFromA() {
	int a, b;
	printf("Ex47 : ���� a, b���� �Է��ϼ���.\n");
	scanf("%d%d", &a, &b);
	if (a < b) {
		for (int i = a + 1; i < b; i++) { // a�ʰ� b�̸� ���� ���
			printf("%d ", i);
		}
	}
	else {
		for (int i = b + 1; i < a; i++) { // b�ʰ� a�̸� ���� ���
			printf("%d ", i);
		}
	}
	printf("\n");
}