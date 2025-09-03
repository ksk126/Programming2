#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question8();

int main()
{
	int result = question8();

	printf("결과: %d", result);

	return 0;
}

int question8()
{
	int n1 = 0, n2 = 0, result = 0;

	printf("정수 2개 입력: ");
	scanf("%d %d", &n1, &n2);

	for (int i = n1; i <= n2; i++) //i는 n1~n2까지 i를 1씩 증가시키면서
	{
		if (i % 2 != 0) //i를 2로 나눈 나머지가 0이 아니면
		{
			result += i; //result + i를 result에 저장
		}
	}

	return result;
}