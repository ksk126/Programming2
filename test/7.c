#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 128 //�迭 �ִ� ��ũ�� ���

int question7();

int main()
{
	int result = question7();

	printf("���: %d", result);

	return 0;
}

int question7()
{
	char str[MAX] = ""; //���ڿ� �迭 str�� �����ϰ� null�� �ʱ�ȭ
	char c = 0;
	int n = 0, result = 0;

	printf("���ڿ��� �ϳ��� ���� �Է�: ");
	scanf("%s %c", str, &c);

	for (int i = 0; i < MAX; i++) //i�� 0~MAX-1���� i�� 1�� ������Ű�鼭
	{
		if (str[i] == c) //���� str�迭�� i�ε����� �Է¹��� c�� ������
		{
			printf("%d", i); //i���
			result++; //result 1 ����
		}
	}

	return result;
}