#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define MAX 10 //배열 최댓값 매크로상수

void question4();
void fillBit(int n); //배열 채우는 함수 fillBit 전방선언

int bit[MAX] = { 0 }; //2진수 값 저장할 bit 배열 전역으로 선언

int main()
{
	question4();

	return 0;
}

void question4()
{
	int n = 0;

	printf("정수 입력: ");
	scanf("%d", &n);

	fillBit(n);

	printf("10진수: %d\n", n);
	printf("2진수: ");
	for (int i = 0; i < MAX; i++) //i는 0~MAX-1까지 i를 1씩 증가시키면서
	{
		printf("%d", bit[i]); //bit배열의 i인덱스에 있는 값을 출력
	}
	printf("\n8진수: %o\n", n); //8진수로 변환하여 출력
	printf("16진수: %x\n", n); //16진수로 변환하여 출력

	return;
}

void fillBit(int n)
{
	for (int i = MAX - 1; i >= 0; i--) //i는 MAX-1~0까지 I를 1씩 감소시키면서(2진수 값의 끝부터 계산되기 때문에 역순으로 저장하기 위함)
	{
		bit[i] = n % 2; //bit배열에 i인덱스에 n을 2로 나눈 나머지 값을 저장
		n /= 2; //n을 2로 나눈 몫을 n에 저장
	}

	return;
}