#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question6();

int main()
{
	int result = question6();

	printf("결과: %d", result);

	return 0;
}

int question6()
{
	int n = 0, result = 0;

	printf("정수 입력: ");
	scanf("%d", &n);

	while (n > 0)
	{
		result += n % 10;
		n /= 10;
	}

	return result;
}