#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question8();

int main()
{
	int result = question8();

	printf("���: %d", result);

	return 0;
}

int question8()
{
	int n1 = 0, n2 = 0, result = 0;

	printf("���� 2�� �Է�: ");
	scanf("%d %d", &n1, &n2);

	for (int i = n1; i <= n2; i++)
	{
		if (i % 2 != 0)
		{
			result += i;
		}
	}

	return result;
}