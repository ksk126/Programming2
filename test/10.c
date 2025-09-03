#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question10();

int main()
{
	int result = question10();

	printf("결과: %d", result);

	return 0;
}

int question10()
{
	char studentNum[10] = ""; //문자열로 학번을 받기 위한 배열
	int result = 0;

	printf("학번을 입력: ");
	scanf("%s", &studentNum);

	for (int i = 0; i < 4; i++) //i는 0~3까지 i를 1씩 증가시키면서
	{
		result = (result * 10) + (studentNum[i] - '0');	} /*result * 10 <- 자릿수를 올리기 위함
															studentNum[i] - '0' <- 문자열의 숫자를 정수형으로 바꿔주기 위해서 문자형 0을 빼줌
															그 값을 result에 저장*/

	return result;
}