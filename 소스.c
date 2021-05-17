#include <stdio.h>
#include <stdlib.h> //rand, srand
#include <time.h>//time

void main(){
	int i,m; //for문용 변수
	int num[11] = { 0 }; //난수 저장할 배열 생성하여 초기화
	int maxcount=0; //가장 많이 생성된 수 저장할 변수
	
	srand(time(NULL)); //rand의 seed값 설정

	for (i = 1; i < 100; i++) { //1~10까지 수 생성하여 해당하는 배열의 인덱스에 카운트
		num[(rand() % 10)+1]++; //(생성횟수 카운트)
	}


	for (m = 1; m < 11; m++) {
		printf("%d : %d회\n", m, num[m]); //1~10까지 생성 횟수 출력
		if (num[m] > num[maxcount]) { //가장 많이 생성된 수 maxcount에 업그레이드
			maxcount = m;
		}
	}

	printf("\n%d가 %d회로 가장 많이 랜덤 수로 출력되었습니다.\n", maxcount, num[maxcount]); //가장 많이 생성된 수인 maxcount와 해당 인덱스의 수인 num[maxcount]를 이용하여 횟수 출력
}
