#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define MAX 10 //�迭 �ִ� ��ũ�λ��

void question4();
void fillBit(int n); //�迭 ä��� �Լ� fillBit ���漱��

int bit[MAX] = { 0 }; //2���� �� ������ bit �迭 �������� ����

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
	for (int i = 0; i < MAX; i++) //i�� 0~MAX-1���� i�� 1�� ������Ű�鼭
	{
		printf("%d", bit[i]); //bit�迭�� i�ε����� �ִ� ���� ���
	}
	printf("\n8����: %o\n", n); //8������ ��ȯ�Ͽ� ���
	printf("16����: %x\n", n); //16������ ��ȯ�Ͽ� ���

	return;
}

void fillBit(int n)
{
	for (int i = MAX - 1; i >= 0; i--) //i�� MAX-1~0���� I�� 1�� ���ҽ�Ű�鼭(2���� ���� ������ ���Ǳ� ������ �������� �����ϱ� ����)
	{
		bit[i] = n % 2; //bit�迭�� i�ε����� n�� 2�� ���� ������ ���� ����
		n /= 2; //n�� 2�� ���� ���� n�� ����
	}

	return;
}