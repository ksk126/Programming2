#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 3 //�迭 �ִ� ��ũ�� ���

typedef struct information //information ����ü ����, typedef ����� ���� Information���� ����
{
	char name[20];
	int age;
	int phoneNum;
}Information;

void question11();
void fillArr(); //�迭�� ä��� ���� �Լ� ���漱��

int main()
{
	question11();

	return 0;
}

void question11()
{
	Information arr[MAX] = { 0 }; //����ü �迭 ����

	fillArr(arr); //fillArr�� ���ڷ� ������ ������ arr ����ü �迭 �ѱ�

	for (int i = 0; i < MAX; i++) //i�� 0~MAX-1���� i�� 1�� ������Ű�鼭
	{
		printf("%s %d %d\n",
			arr[i].name, arr[i].age, arr[i].phoneNum); //����ü �迭�� i�ε����� �ִ� ������ ��Ҹ� ���
	}
}

void fillArr(Information* arr)
{
	for (int i = 0; i < MAX; i++) //i�� 0~MAX-1���� i�� 1�� ������Ű�鼭 
	{
		printf("�̸� ���� ��ȭ��ȣ �Է�: ");
		scanf("%s %d %d",
			&arr[i].name, &arr[i].age, &arr[i].phoneNum); //����ü �迭�� i�ε����� �ִ� ������ ����� �ּҸ� �Ѱ���

		if (strcmp(arr[i].name, "0") == 0 || //arr�迭�� name�� ���ڿ��̹Ƿ� strcmp ����ؼ� �ش� �ε����� name ���� ������ 0���� Ȯ��, ���� ���ٸ�, �Ǵ�
			arr[i].age == 0) //arr�迭�� i�ε����� age ���� 0�̶��
		{
			return; //fillArr �Լ� ����, arr�迭�� �����͸� ����� �ּҸ� �Ѱ���� ������ ���� ��ȯ���� �ʾƵ� ����� �ݿ���
		}

	}

	return;
}