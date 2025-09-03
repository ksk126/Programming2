#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question3();

int main()
{
	int result = question3();

	printf("반환된 값 확인: %d", result);

	return 0;
}

int question3()
{
	int a = 0, b = 0, result = 0;

	printf("a 입력: ");
	scanf("%d", &a);
	printf("b 입력: ");
	scanf("%d", &b);

	if ((a + b) < (a << b))
	{
		if ((a * b) < (a << b))
		{
			result = a << b;
		}
		else
		{
			result = a * b;
		}
	}
	else if ((a * b) < (a + b))
	{
		result = a + b;
	}

	return result;
}