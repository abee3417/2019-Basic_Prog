#include <stdio.h>
int main() {
	char str1[] = "My String"; // �Ϲ����� ���ڿ�
	char *str2 = "Your String"; // ���ڿ��� ����Ű�� �ִ� ������
	printf("%c\n", str1); // �ٸ� �迭ó�� �ε��� �ȳ����� ó����x
	printf("%c\n", str1[0]); // �̷��� �־�����Ѵ�. 'M' ���
	printf("%c\n", str1[9]); // '\0' ���
	printf("%c\n", *(str2 + 1)); // 'o' ���
	*str1 = 'X'; // �����ϴ�. str1[0]�� �ٲ�
	// *str2 = 'X';
	// �Ұ���. �̷� �迭�� ����Ű�� �������� �迭�� ������
	printf("%c\n", *str1); // 'X' ���
	printf("%c\n", str2[0]); // 'Y' ���
	// str1 = str2;
	// �Ұ���. ���ó� ���� ���� ����
	str2 = str1; // �̰Ŵ� �����ϴ�.
	printf("%c\n", *str1); // 'X' ���
	printf("%c\n", str2[0]); // 'X' ���
	str2[0] = '1';
	// �Ҵ�����̱� ������ �Ȱ��� �ٲ��.
	printf("%c\n", *str1); // '1' ���
	printf("%c\n", str2[0]); // '1' ���
	str2 = "Our String";
	// "Your String"�� ������ ���� "Our String"�� �����Ѵ�. ����.
	printf("%p\n", str1);
	printf("%p\n", str2);
	printf("%s\n", str1); // %s�� ���� �׳� �����̸��� ���� ���ڿ� ���
	printf("%s\n", str2); // �̰͵� ��������.
	printf("%c\n", *(str1 + 1)); // 'y' ���
	printf("%c\n", *(str2 + 1)); // 'u' ���
	return 0;
}