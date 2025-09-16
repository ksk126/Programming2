/*
���ϸ�: assignment16
����: ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ã�� �ε����� �����ϴ� find_array �Լ��� �ۼ��Ͻÿ�. Ű ���� ã�� �� ������ -1�� �����Ѵ�.
�ۼ���: �����
��¥:26.09.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void assignment16();
int* fillArr();
int input();
int find_array(int n, int* arr);
void printResult(int i, int n);

int main()
{
	assignment16();

	return 0;
}

void assignment16()
{
	srand(time(NULL));

	int* p = fillArr();
	int n = input();
	int i = find_array(n, p);
	printResult(i, n);

	return;
}

int find_array(int n, int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == n)
		{
			return i;
		}
	}

	return -1;
}

int input()
{
	int n = 0;

	printf("ã�� ��? ");
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

void printResult(int i, int n)
{
	if (i == -1)
	{
		printf("���� ���� ã�� �� �����ϴ�.");
		return;
	}
	printf("%d�� %d��° �����Դϴ�.", n, i);

	return;
}