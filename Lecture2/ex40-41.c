#include <stdio.h>
void max_void(); //Ex40
int max_int(int a, int b, int c); //Ex41
int main() {
	int a, b, c, result;
	max_void();
	printf("Ex41 : �� ���� �Է��ϼ��� (max int ver.)\n");
	scanf("%d%d%d", &a, &b, &c);
	result = max_int(a, b, c);
	printf("���� ū ���� %d�Դϴ�.\n", result);
	return 0;
}

// Ex40
void max_void() {
	int a, b, c, max;
	printf("Ex40 : �� ���� �Է��ϼ��� (max void ver.)\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	printf("���� ū ���� %d�Դϴ�.\n", max);
}

// Ex41
int max_int(int a, int b, int c) {
	int max;
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	if (c > max) {
		return c;
	}
	else {
		return max;
	}
}