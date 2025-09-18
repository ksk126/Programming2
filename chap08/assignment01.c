#include <stdio.h>
#define SIZE 3

void assignment01();
void print(double* p);

int main()
{
	assignment01();

	return 0;
}

void assignment01()
{
	double arr[SIZE] = { 0 };
	double* p = arr;

	print(p);

	return;
}

void print(double* p)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("x[%d]ÀÇ ÁÖ¼Ò: %p\n", i, (void*)&p[i]);
	}

	return;
}