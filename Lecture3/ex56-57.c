#include <stdio.h>
void ex56();
void ex57();
int main() {
	ex56();
	ex57();
	return 0;
}

void ex56() {
	char nlist[4][20] = { {"Yun Seong"}, {"David"}, {"Ruti"}, {"No name"} };
	printf("%d\n", 5 >> 1);
	printf("==========Ex56==========\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; nlist[i][j] != '\0'; j++) {
			printf("%c", nlist[i][j]);
		}
		printf("\n");
	}
}

void ex57() {
	int arr[20];
	printf("==========Ex57==========\n");
	printf("배열에 넣을 숫자들을 입력해주세요.\n");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0) {
			break;
		}
	}
	for (int i = 0; i < 20; i++) {
		if (arr[i] == 0) {
			break;
		}
		printf("%d ", arr[i]);
	}
	printf("\n");
}