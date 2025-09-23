#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void assignment08();
void input(int *p);
void fill_array(int *p);
void print();

int arr[MAX] = { 0 };

int main()
{
	assignment08();

	return 0;
}

void assignment08()
{
	int p = 0;

	input(&p);
	fill_array(&p);
	print();

	return;
}

void input(int *p)
{
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", p);

	return;
}

void fill_array(int *p)
{
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = *p;
	}

	return;
}

void print()
{
	for (int i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}