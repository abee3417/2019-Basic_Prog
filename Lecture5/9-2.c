#include <stdio.h>
int main() {
	int n, count = 0;
	int arr[32] = { 0 };
	printf("Enter an integers : ");
	scanf("%d", &n);
	while (n >= 2) {
		arr[count] = n % 2;
		count++;
		n /= 2;
	}
	if (n == 1) {
		arr[count] = 1;
	}
	for (int i = 31; i >= 0; i--) {
		printf("%d", arr[i]);
		if (i == 8 || i == 16 || i == 24) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}