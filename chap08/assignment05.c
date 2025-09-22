#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

void assignment05();
void input(int* first, int* cd);
void arith_seq(const int* first, const int* cd, int* arr);
void print(int* arr);

int main()
{
	assignment05();

	return 0;
}

void assignment05()
{
	int arr[MAX] = { 0 };
	int first = 0, cd = 0;

	input(&first, &cd);

	arith_seq(&first, &cd, arr);

	print(arr);

	return;
}

void input(int* first, int* cd)
{
	
	printf("ù ��° ��? ");
	scanf("%d", first);
	printf("����? ");
	scanf("%d", cd);

	return;
}

void arith_seq(const int* first, const int* cd, int* arr)
{
	arr[0] = *first;
	for (int i = 1; i < MAX; i++)
	{
		arr[i] = arr[i - 1] + *cd;
	}

	return;
}

void print(int* arr)
{
	printf("��������: ");
	for (int i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}

	return;
}