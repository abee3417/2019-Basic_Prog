#include <stdio.h>
#include <stdlib.h>
void Print(int n, int num);
int main() {
	int n, square_n = 1;
	int* arr;
	printf("Case? ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		square_n *= 2;
	}
	for (int i = 0; i < square_n; i++) {
		Print(n, i);
	}
}
void Print(int n, int num) {
	int *arr = (int*)malloc(sizeof(int) * n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
	while (num >= 2) {
		arr[count] = num % 2;
		num /= 2;	
		count++;
	}
	if (num == 1) {
		arr[count] = 1;
	}
	for (int i = n; i > 0; i--) {
		printf("%d", arr[i - 1]);
	}
	printf("\n");
	free(arr);
}