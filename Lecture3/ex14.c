#include <stdio.h>
int bin(int n);
int main() {
	int n;
	while (1) {
		printf("Enter a decimal number : ");
		scanf("%d", &n);
		if ((0 <= n) && (n <= 255)) {
			break;
		}
	}
	printf("Binary number : ");
	if (n < 128) {
		for (int i = 128; i > n; i /= 2) {
			printf("0");
		}
	}
	if (n < 2) {
		printf("%d\n", n);
	}
	else {
		printf("%d\n", bin(n));
	}
	return 0;
}
int bin(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if ((n % 2) == 0) {
		printf("%d", bin(n / 2));
		return 0;
	}
	else {
		printf("%d", bin(n / 2));
		return 1;
	}
}