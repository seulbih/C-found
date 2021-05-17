#include <stdio.h>
#include <string.h> //strlen함수 사용하기 위해 헤더파일 불러옴

void main() {
	int len, i; //문자열의 길이변수, for문에서 쓰일 변수
	char str[100]; //문자열 최대 100자까지 입력받을 문자열변수

	printf("문자열 입력 : ");
	scanf_s("%[^\n]s", str, 60); //문자열 입력받음
	/*%[^\n]s 형식 지정자 사용으로 공백 포함하여 입력받음*/
	printf("\n");

	len = strlen(str); //문자열str의 길이를 len에 대입

	printf("결과 : ");
	for (i = len - 1; i >= 0; i--) { //문자열길이-1부터 0까지, str[len-1]~str[0] 반복문 이용하여 문자 출력
		printf("%c", str[i]);
	}
	printf("\n");
}