#include "stdio.h"
#include "���.h"
#include "stdlib.h"

void main() {

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			PAPER[i][j] = rand()%5+1;
		}
		PAPER[i][10] = 0;
	}
	//PAPER ������ �Է�.

	

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (PAPER[i][j] == ANS[j]) {
				RES[i][j] = 'O';
				PAPER[i][10]++;
			}
			else
				RES[i][j] = '-';
		}
	}
	//ä�� ��,PAPER[][10]�� ���� �Է� 



	printf("\t***���׺� ä�� ���***\n");
	printf("================================================================================================\n");
	printf("����\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t����\n");
	printf("================================================================================================\n");
	
	for (int a = 0; a < 10; a++) {
		printf("%d��\t", a);
		for (int b = 0; b < 10; b++) {
			printf(" %c\t",RES[a][b]);
		}
		printf("%d��\n", PAPER[a][10]);
	}

	//���
}

