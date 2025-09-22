#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void assignment08();
void input(int* p);
void fill_array(int *p);

int main()
{
	assignment08();

	return 0;
}

void assignment08()
{
	int* p;

	input(&p);
	fill_array(&p);

	return;
}

void input(int* p)
{
	scanf("%d", p);

	return;
}

void fill_array(int *p)
{
	for (int i = 0; i < MAX; i++)
	{
		
	}
}