#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 3 //배열 최댓값 매크로 상수

typedef struct information //information 구조체 선언, typedef 사용해 별명 Information으로 지음
{
	char name[20];
	int age;
	int phoneNum;
}Information;

void question11();
void fillArr(); //배열을 채우기 위한 함수 전방선언

int main()
{
	question11();

	return 0;
}

void question11()
{
	Information arr[MAX] = { 0 }; //구조체 배열 선언

	fillArr(arr); //fillArr에 인자로 위에서 선언한 arr 구조체 배열 넘김

	for (int i = 0; i < MAX; i++) //i는 0~MAX-1까지 i를 1씩 증가시키면서
	{
		printf("%s %d %d\n",
			arr[i].name, arr[i].age, arr[i].phoneNum); //구조체 배열의 i인덱스에 있는 각각의 요소를 출력
	}
}

void fillArr(Information* arr)
{
	for (int i = 0; i < MAX; i++) //i는 0~MAX-1까지 i를 1씩 증가시키면서 
	{
		printf("이름 나이 전화번호 입력: ");
		scanf("%s %d %d",
			&arr[i].name, &arr[i].age, &arr[i].phoneNum); //구조체 배열의 i인덱스에 있는 각각의 요소의 주소를 넘겨줌

		if (strcmp(arr[i].name, "0") == 0 || //arr배열의 name은 문자열이므로 strcmp 사용해서 해당 인덱스의 name 값이 문자형 0인지 확인, 만약 같다면, 또는
			arr[i].age == 0) //arr배열의 i인덱스의 age 값이 0이라면
		{
			return; //fillArr 함수 종료, arr배열을 포인터를 사용해 주소를 넘겨줬기 때문에 굳이 반환하지 않아도 결과가 반영됨
		}

	}

	return;
}