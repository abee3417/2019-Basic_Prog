#include <stdio.h>
int gcd(int x, int y);
int main() {
	int x, y;
	printf("input two numbers : ");
	scanf("%d%d", &x, &y);
	printf("GCD of these two numbers : %d\n", gcd(x, y));
	return 0;
}
int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}