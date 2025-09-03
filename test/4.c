#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define MAX 10

void question4();
void fillBit(int n);

int bit[MAX] = { 0 };

int main()
{
	question4();

	return 0;
}

void question4()
{
	int n = 0;

	printf("���� �Է�: ");
	scanf("%d", &n);

	fillBit(n);

	printf("10����: %d\n", n);
	printf("2����: ");
	for (int i = 0; i < MAX; i++)
	{
		printf("%d", bit[i]);
	}
	printf("\n8����: %o\n", n);
	printf("16����: %x\n", n);

	return;
}

void fillBit(int n)
{
	for (int i = MAX - 1; i >= 0; i--)
	{
		bit[i] = n % 2;
		n /= 2;
	}

	return;
}