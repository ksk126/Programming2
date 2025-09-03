#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void question5();

int main()
{
	question5();

	return 0;
}

void question5()
{
	int n = 0, m = 0, result = 0;

	printf("n m 입력: ");
	scanf("%d %d", &n, &m);

	for (int i = n; i <= m; i++)
	{
		result += i;
	}

	printf("결과: %d", result);

	return;
}