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
	char studentNum[10] = "";
	int result = 0;

	printf("�й��� �Է�: ");
	scanf("%s", &studentNum);

	for (int i = 0; i < 4; i++)
	{
		result = (result * 10) + (studentNum[i] - '0');	}

	return result;
}