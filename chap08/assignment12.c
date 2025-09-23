#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

void assignment12();
int find_all_in_array(int *n, int *arr, int *index);
void input(int *n, int *arr);
void print(int* arr, int* index, int findIdx);

int main()
{
	assignment12();

	return 0;
}

void assignment12()
{
	int arr[MAX] = { 0 };
	int index[MAX] = { 0 };
	int n = 0;
	int findIndex = 0;

	input(&n, arr);
	findIndex = find_all_in_array(&n, arr, index);
	print(arr, index, findIndex);

	return;
}

int find_all_in_array(int* n, int* arr, int *index)
{
	int j = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] == *n)
		{
			index[j] = i;
			j++;
		}
	}

	return j;
}

void input(int* n, int* arr)
{
	printf("�迭 �Է°� 10��?\n");
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("ã�� ��? ");
	scanf("%d", n);

	return;
}

void print(int* arr, int* index, int findIdx)
{
	printf("ã�� �׸��� ��� %d���Դϴ�.\n", findIdx);
	printf("ã�� �׸��� �ε���: ");
	for (int i = 0; i < findIdx; i++)
	{
		printf("%d ", index[i]);
	}

	return;
}