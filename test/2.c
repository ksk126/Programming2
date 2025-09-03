#include <stdio.h>
#define PI 3.141592 //5. 원주율 상수를 저장하는 매크로변수 PI

void question2(); //전방선언

int main()
{
question2(); //question2 함수 호출

return 0;
}

void question2()
{
int num = 5; //1. 정수 5를 저장하는 변수
double fnum = 2.14; //2. 실수 2.14를 저장하는 변수
char sentence[128] = "Hello"; //3. 문자열 Hello를 저장하는 변수
int numList[] = { 1,2,3,4 }; //3. 정수 1,2,3,4를 저장하는 배열
char sentenceList[][128] = { "Apple","Banana","Cherry","Durian" }; //4. 문자열을 저장하는 배열
const char* sentenceList2[] = { "Apple","Banana","Cherry","Durian" }; //4. 문자열을 저장하는 배열(다른방법)
const double PI2 = 3.141592; //5. 원주율 상수를 저장하는 상수형 변수

typedef struct information {
	char name[20];
	int age;
	int phoneNum;
}Information; //6. 이름 나이 전화번호를 저장하는 구조체 선언, typedef 사용해서 별명 Information으로 설정

return;
}