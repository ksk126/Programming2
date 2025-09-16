/*
파일명: assignment17
내용: 최대 10개의 정수형 원소를 저장할 수 있는 집합을 구현하시오. 정수를 입력받아 집합의 원소로 추가하고, 그 때마다 집합의 원소들을 출력하시오. 원소의 중복을 허용한다.
작성자: 김수경
날짜:26.09.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment17();
int input();
int fillArr(int n, int index);
void printArr(int index);

static int arr[SIZE] = { 0 };

int main()
{
	assignment17();

	return 0;
}

void assignment17()
{
	int index = 0;
	while (index < SIZE)
	{
		int n = input();
		index = fillArr(n, index);
		printArr(index);
	}

	return;
}

void printArr(int index)
{
	for (int i = 0; i < index; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}

int fillArr(int n, int index)
{
	if (index < SIZE)
	{
		arr[index] = n;
		index++;
	}

	return index;
}

int input()
{
	int n = 0;
	printf("배열에 추가할 원소? ");
	scanf("%d", &n);

	return n;
}