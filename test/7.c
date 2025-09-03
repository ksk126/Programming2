#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 128

int question7();

int main()
{
	int result = question7();

	printf("결과: %d", result);

	return 0;
}

int question7()
{
	char str[MAX] = "";
	char c = 0;
	int n = 0, result = 0;

	printf("문자열과 하나의 문자 입력: ");
	scanf("%s %c", str, &c);

	for (int i = 0; i < MAX; i++)
	{
		if (str[i] == c)
		{
			printf("%d", i);
			result++;
		}
	}

	return result;
}