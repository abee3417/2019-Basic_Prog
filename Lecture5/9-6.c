#include <stdio.h>
int main() {
	// ������ �迭
	char *ptr[3]; // ���⿣ �ݵ�� �ּҰ��� ���ߵȴ�. ���� �̷��� x
	char *test[10];
	ptr[0] = "Scarlett Johansson"; // �� ������ �ּҰ��� ����.
	ptr[1] = "Taylor Swift";
	ptr[2] = "Emma Watson";
	for (int i = 0; i < 3; i++) {
		printf("ptr[%d] = %p, %s\n", i, ptr[i], ptr[i]);
		// ���� : ������ �迭���� %s�� ���� ������ ������ ����. *ptr[i]�� x
		printf("%c\n", *ptr[i]);
		printf("%c\n", *(ptr[i] + 1));
		// �� �ܾ ����ϰ� ������ �̷���.
		// Ȥ�� ptr[i][1] �̷��ĵ� ����.
	}
	printf("�׽�Ʈ ���� �Է� : ");
	scanf("%[^\n]s", test);
	printf("�׽�Ʈ ���� : %s\n", test);
	return 0;
}