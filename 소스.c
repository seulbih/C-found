#include <stdio.h>
#include <string.h> //strlen�Լ� ����ϱ� ���� ������� �ҷ���

void main() {
	int len, i; //���ڿ��� ���̺���, for������ ���� ����
	char str[100]; //���ڿ� �ִ� 100�ڱ��� �Է¹��� ���ڿ�����

	printf("���ڿ� �Է� : ");
	scanf_s("%[^\n]s", str, 60); //���ڿ� �Է¹���
	/*%[^\n]s ���� ������ ������� ���� �����Ͽ� �Է¹���*/
	printf("\n");

	len = strlen(str); //���ڿ�str�� ���̸� len�� ����

	printf("��� : ");
	for (i = len - 1; i >= 0; i--) { //���ڿ�����-1���� 0����, str[len-1]~str[0] �ݺ��� �̿��Ͽ� ���� ���
		printf("%c", str[i]);
	}
	printf("\n");
}