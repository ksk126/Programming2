#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question6();

int main()
{
	int result = question6();

	printf("���: %d", result);

	return 0;
}

int question6()
{
	int n = 0, result = 0;

	printf("���� �Է�: ");
	scanf("%d", &n);

	while (n > 0) //n�� 0���� Ŭ �� �ݺ�
	{
		result += n % 10; //result + n % 10�� result�� ����
		n /= 10; //n�� 10���� ���� ���� n�� ����
	}

	return result;
}