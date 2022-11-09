#include <stdio.h>
void swap(char **pa, char **pb);
int main(void) {
	char *s1 = "String 1";
	char *s2 = "String 2";
	swap(s1, s2);
	printf("s1 is %s\n", s1);
	printf("s2 is %s\n", s2);
}
void swap(char **a, char **b) {
	int i = 0;
	while (1) {
		if (**(a + i) == '\0') {
			break;
		}
		char *temp = **(b + i);
		**(b + i) = **(a + i);
		**(a + i) = *temp;
		i++;
	}
}