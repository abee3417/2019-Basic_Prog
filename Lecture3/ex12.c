#include <stdio.h>
int sumAliquot(int n);
int main() {
	int n, sum;
	printf("Enter a number : ");
	scanf("%d", &n);
	sum = sumAliquot(n);
	if (n * 2 == sum) {
		printf("%d / Perfect Number\n", sum);
	}
	else {
		printf("%d / Not Perfect Number\n", sum);
	}
	return 0;
}
int sumAliquot(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if ((n % i) == 0) {
			sum += i;
		}
	}
	return sum;
}