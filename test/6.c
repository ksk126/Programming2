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

	while (n > 0) //n이 0보다 클 때 반복
	{
		result += n % 10; //result + n % 10을 result에 저장
		n /= 10; //n을 10으로 나눈 몫을 n에 저장
	}

	return result;
}