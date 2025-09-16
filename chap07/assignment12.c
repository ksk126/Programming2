/*
���ϸ�: assignment12
����: ����ǥ ���� ���α׷�. �¼��� ��� 10���� O�̸� ���� ����, X�̸� ���� �Ұ��� �ǹ��Ѵ�. ���̻� ������ �� ������ ���α׷��� ����.
�ۼ���: �����
��¥:26.09.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment12();
int printResult(int count, int startIndex);
void fillArr(int count, int startIndex);
int input();

static char arr[SIZE] = { 'O','O','O','O','O','O','O','O','O','O' };

int main()
{
	assignment12();

	return 0;
}

void assignment12()
{
	int index = 0;
	while (1) {
		int count = input();
		fillArr(count, index);
		int endCode=printResult(count, index);
		index += count;
		if (endCode == 1)
		{
			break;
		}
	}

	return;
}

int input()
{
	int n = 0;

	printf("������ �¼���? ");
	scanf("%d", &n);

	return n;
}

void fillArr(int count, int startIndex)
{
	for (int i = startIndex; i < startIndex + count; i++)
	{
		arr[i] = 'X';
	}

	return;
}

int printResult(int count, int startIndex)
{
	if (count > 1)
	{
		for (int i = startIndex; i < startIndex + count; i++)
		{
			printf("%d ", i+1);
		}
		printf("�� �¼��� �����߽��ϴ�.\n");
	}

	printf("���� �¼�: [ ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("]\n");

	if (arr[SIZE - 1] == 'X')
	{
		return 1;
	}

	return 0;
}