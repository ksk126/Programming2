#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question10();

int main()
{
	int result = question10();

	printf("���: %d", result);

	return 0;
}

int question10()
{
	char studentNum[10] = ""; //���ڿ��� �й��� �ޱ� ���� �迭
	int result = 0;

	printf("�й��� �Է�: ");
	scanf("%s", &studentNum);

	for (int i = 0; i < 4; i++) //i�� 0~3���� i�� 1�� ������Ű�鼭
	{
		result = (result * 10) + (studentNum[i] - '0');	} /*result * 10 <- �ڸ����� �ø��� ����
															studentNum[i] - '0' <- ���ڿ��� ���ڸ� ���������� �ٲ��ֱ� ���ؼ� ������ 0�� ����
															�� ���� result�� ����*/

	return result;
}