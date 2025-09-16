/*
파일명: assignment07
내용: 정수형 배열의 모든 원소를 특정 값으로 채우는 fill_array 함수를 작성하시오. 크기가 20인 배열을 선언해서 입력받은 값으로 배열 전체를 채우고 출력하는 프로그램을 작성하시오.
작성자: 김수경
날짜:26.09.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void assignment07();
void fill_array(int* arr, int n);
int input();
void printResult(int* arr);

int main()
{
	assignment07();

	return 0;
}

void assignment07()
{
	int arr[SIZE] = { 0 };

	int n = input();
	fill_array(arr, n);
	printResult(arr);

	return;
}

int input()
{
	int n = 0;
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &n);

	return n;
}

void fill_array(int* arr, int n)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = n;
	}

	return;
}

void printResult(int *arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
}