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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}