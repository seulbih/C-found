#include <stdio.h>
#include <stdlib.h> //rand, srand
#include <time.h>//time

void main(){
	int i,m; //for���� ����
	int num[11] = { 0 }; //���� ������ �迭 �����Ͽ� �ʱ�ȭ
	int maxcount=0; //���� ���� ������ �� ������ ����
	
	srand(time(NULL)); //rand�� seed�� ����

	for (i = 1; i < 100; i++) { //1~10���� �� �����Ͽ� �ش��ϴ� �迭�� �ε����� ī��Ʈ
		num[(rand() % 10)+1]++; //(����Ƚ�� ī��Ʈ)
	}


	for (m = 1; m < 11; m++) {
		printf("%d : %dȸ\n", m, num[m]); //1~10���� ���� Ƚ�� ���
		if (num[m] > num[maxcount]) { //���� ���� ������ �� maxcount�� ���׷��̵�
			maxcount = m;
		}
	}

	printf("\n%d�� %dȸ�� ���� ���� ���� ���� ��µǾ����ϴ�.\n", maxcount, num[maxcount]); //���� ���� ������ ���� maxcount�� �ش� �ε����� ���� num[maxcount]�� �̿��Ͽ� Ƚ�� ���
}
