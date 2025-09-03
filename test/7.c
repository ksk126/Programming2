#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 128 //배열 최댓값 매크로 상수

int question7();

int main()
{
	int result = question7();

	printf("결과: %d", result);

	return 0;
}

int question7()
{
	char str[MAX] = ""; //문자열 배열 str을 선언하고 null로 초기화
	char c = 0;
	int n = 0, result = 0;

	printf("문자열과 하나의 문자 입력: ");
	scanf("%s %c", str, &c);

	for (int i = 0; i < MAX; i++) //i는 0~MAX-1까지 i를 1씩 증가시키면서
	{
		if (str[i] == c) //만약 str배열의 i인덱스가 입력받은 c와 같으면
		{
			printf("%d", i); //i출력
			result++; //result 1 증가
		}
	}

	return result;
}