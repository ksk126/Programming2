#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int question9();

int main()
{
	question9();

	return 0;
}

int question9()
{
	int a[3][3] = { 0 };
	int b[3][3] = { 0 };
	int result[3][3] = { 0 };

	printf("a배열 1행: ");
	scanf("%d %d %d",
		&a[0][0], &a[0][1], &a[0][2]);
	printf("a배열 2행: ");
	scanf("%d %d %d",
		&a[1][0], &a[1][1], &a[1][2]);
	printf("a배열 3행: ");
	scanf("%d %d %d",
		&a[2][0], &a[2][1], &a[2][2]);

	printf("b배열 1행: ");
	scanf("%d %d %d",
		&b[0][0], &b[0][1], &b[0][2]);
	printf("b배열 2행: ");
	scanf("%d %d %d",
		&b[1][0], &b[1][1], &b[1][2]);
	printf("b배열 3행: ");
	scanf("%d %d %d",
		&b[2][0], &b[2][1], &b[2][2]);

	for (int i = 0; i < 3; i++) //i는 0~2까지 i를 1씩 증가시키면서
	{
		for (int j = 0; j < 3; j++) //j는 0~2까지 j를 1씩 증가시키면서
		{
			result[i][j] = a[i][j] + b[i][j]; //result배열의 i열 j행에 a배열의 i열 j행과 b배열의 i열 j행을 더한 값 저장
			printf("%d ", result[i][j]); //result배열의 i열 j행 값 출력
		}
		printf("\n"); //줄바꿈
	}

	return 0;
}