#include <stdio.h>
#define PI 3.141592 //5. ������ ����� �����ϴ� ��ũ�κ��� PI

void question2(); //���漱��

int main()
{
question2(); //question2 �Լ� ȣ��

return 0;
}

void question2()
{
int num = 5; //1. ���� 5�� �����ϴ� ����
double fnum = 2.14; //2. �Ǽ� 2.14�� �����ϴ� ����
char sentence[128] = "Hello"; //3. ���ڿ� Hello�� �����ϴ� ����
int numList[] = { 1,2,3,4 }; //3. ���� 1,2,3,4�� �����ϴ� �迭
char sentenceList[][128] = { "Apple","Banana","Cherry","Durian" }; //4. ���ڿ��� �����ϴ� �迭
const char* sentenceList2[] = { "Apple","Banana","Cherry","Durian" }; //4. ���ڿ��� �����ϴ� �迭(�ٸ����)
const double PI2 = 3.141592; //5. ������ ����� �����ϴ� ����� ����

typedef struct information {
	char name[20];
	int age;
	int phoneNum;
}Information; //6. �̸� ���� ��ȭ��ȣ�� �����ϴ� ����ü ����, typedef ����ؼ� ���� Information���� ����

return;
}