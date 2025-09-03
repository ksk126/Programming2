#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question3();

int main()
{
	int result = question3(); //result에 question3에서 반환한 값 저장

	printf("반환된 값 확인: %d", result); //결과 출력

	return 0;
}

int question3()
{
	int a = 0, b = 0, result = 0; //a, b, result 변수 선언

	printf("a 입력: ");
	scanf("%d", &a);
	printf("b 입력: ");
	scanf("%d", &b);

	if ((a + b) < (a << b)) //a+b < a<<b이면
	{
		if ((a * b) < (a << b)) //a*b < a<<b 이면
		{
			result = a << b; //result에 제일 큰 값인 a<<b 저장
		}
		else
		{
			result = a * b; //result에 제일 큰 값인 a*b 저장
		}
	}
	else if ((a * b) < (a + b)) //a*b < a+b이면
	{
		result = a + b; //result에 제일 큰 값인 a+b 저장
	}

	return result;
}