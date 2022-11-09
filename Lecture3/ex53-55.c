#include <stdio.h>
void ex53();
void ex54();
void ex55();
int main() {
	ex53();
	ex54();
	ex55();
	return 0;
}

void ex53() {
	int arr[20];
	printf("==========Ex53==========\n");
	for (int i = 0; i < 20; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < 20; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void ex54() {
	char name[20] = "YANGYUNSEONG";
	printf("==========Ex54==========\n");
	for (int i = 0; name[i] != '\0'; i++) {
		printf("[%c]", name[i]);
	}
	printf("\n");
}

void ex55() {
	int count;
	char arr[20] = "HELLOWORLD!";
	printf("==========Ex55==========\n");
	for (int i = 0; i < 20; i++) {
		if (arr[i] == '\0') {
			count = i;
			break;
		}
	}
	for (int i = count - 1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	printf("\n");
}