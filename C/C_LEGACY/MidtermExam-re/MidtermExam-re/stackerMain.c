#define _CRT_SECURE_NO_WARNINGS

#include "stacker.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	Stack stack;
	StackInit(&stack);

	int instNum;

	printf("�� ����� �� >> "); //�� ����� �� �Է�.
	scanf("%d", &instNum);

	char inst[10]; 
	int inst_temp; 
	int inst_int; 

	for (int i = 0; i < instNum; i++) {
		
		printf("��� : ");
		scanf("%s%[^\n]", inst, &inst_temp); //��ɾ� ����, ������(����) scanf�� ���� ��, ����� �ӽ� ����.
		inst_int = atoi(&inst_temp); //atoi�� ���� �ӽ÷� ���� ���� ��ȯ.
		
		if (strcmp(inst, "push") == 0) { //���� x �� ���ÿ� �״� ����.
			SPush(&stack, inst_int);
		}
		else if (strcmp(inst, "pop") == 0) { //���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ���. ���� ���ÿ� ������ ���� ��� -1 ���.
			int temp = SPop(&stack);
			printf("\t\t\t%d\n", temp);
		}
		else if (strcmp(inst, "size") == 0) { //���ÿ� �� �ִ� ������ ������ ��ȯ. (index+1 �� ���ÿ� �� �ִ� ����)
			int temp = SSize(&stack);
			printf("\t\t\t%d\n", temp);
		}
		else if (strcmp(inst, "empty") == 0) { //������ ��� ������ 1, �ƴϸ� 0�� ���.
			int temp = SIsEmpty(&stack);
			printf("\t\t\t%d\n", temp);
		}
		else if (strcmp(inst, "top") == 0) { //������ ���� ���� �ִ� ������ ���. ���� ���ÿ� ������ ���� ��� -1 ���.
			int temp = SPeek(&stack);
			printf("\t\t\t%d\n", temp);
		}
	}

	return 0; 
}