/*
파일명: assignment05
내용: 특정 값으로 초기화된 정수형 배열에 대하여 사용자가 입력한 값을 배열의 끝에서부터 역순으로 찾아서 찾은 원소의 인덱스를 출력하는 프로그램을 작성하시오.
작성자: 김수경
날짜:26.09.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void assignment05();
int* fillArr();
int input();
void findN(int n, int* arr);

int main()
{
	assignment05();

	return 0;
}

void assignment05()
{
	srand(time(NULL));

	int* p = fillArr();
	int n = input();
	findN(n, p);

	return;
}

void findN(int n, int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == n)
		{
			printf("%d는 %d번째 원소입니다.\n", n, i + 1);
			return;
		}
	}
	printf("같은 값을 찾을 수 없습니다.");

	return;
}

int input()
{
	int n = 0;

	printf("찾을 값? ");
	scanf("%d", &n);

	return n;
}

int* fillArr()
{
	int arr[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		int random = rand() % 100 + 1;
		arr[i] = random;
	}
	
	int* p = arr;

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return p;
}