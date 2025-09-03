#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 3

typedef struct information
{
	char name[20];
	int age;
	int phoneNum;
}Information;

void question11();
void fillArr();

int main()
{
	question11();

	return 0;
}

void question11()
{
	Information arr[MAX] = { 0 };

	fillArr(arr);

	for (int i = 0; i < MAX; i++)
	{
		printf("%s %d %d\n",
			arr[i].name, arr[i].age, arr[i].phoneNum);
	}
}

void fillArr(Information* arr)
{
	for (int i = 0; i < MAX; i++)
	{
		printf("이름 나이 전화번호 입력: ");
		scanf("%s %d %d",
			&arr[i].name, &arr[i].age, &arr[i].phoneNum);

		if (strcmp(arr[i].name, "0") == 0 ||
			arr[i].age == 0)
		{
			return;
		}

	}

	return;
}