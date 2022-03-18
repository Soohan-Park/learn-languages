#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE	1
#define FALSE	0
#define STACK_LEN	10000

typedef int Data;

typedef struct _arrayStack
{
	Data stackArr[STACK_LEN];
	int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

#endif

void StackInit(Stack * pstack)
{
	pstack->topIndex = -1;
}

int empty(Stack * pstack) //������ ��������� 1, �ƴϸ� 0 ���
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}

void push(Stack * pstack, Data data) //���� x �� ���ÿ� �״´�.
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data pop(Stack * pstack) //���ÿ��� ���� ���� �ִ� ������ ���� ��ȯ, ���ÿ� ������ ���ٸ� -1 ���
{
	int rIdx;

	if (empty(pstack))
	{
		return -1;
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rIdx];
}

Data top(Stack * pstack) //������ ���� ���� �ִ� ���� ��ȯ. ������� -1 ��ȯ.
{
	if (empty(pstack))
	{
		return -1;
	}

	return pstack->stackArr[pstack->topIndex];
}

int size(Stack * pstack) { //������ ������ ��ȯ.
	return pstack->topIndex + 1; //������ ������ �ε������� 1 ��ŭ ũ��.
}


int main() {
	Stack stack;
	StackInit(&stack);
	int instNum;


	scanf("%d", &instNum);

	char inst[10];
	int inst_temp;
	int inst_int;

	int printAns[100];
	int j = 0;


	for (int i = 0; i < instNum; i++) {


		scanf("%s%[^\n]", inst, &inst_temp);
		inst_int = atoi(&inst_temp);

		if (strcmp(inst, "push") == 0) {
			push(&stack, inst_int);
		}
		else if (strcmp(inst, "pop") == 0) {
			int temp = pop(&stack);
			printAns[j] = temp;
			j++;
		}
		else if (strcmp(inst, "size") == 0) {
			int temp = size(&stack);
			printAns[j] = temp;
			j++;
		}
		else if (strcmp(inst, "empty") == 0) {
			int temp = empty(&stack);
			printAns[j] = temp;
			j++;
		}
		else if (strcmp(inst, "top") == 0) {
			int temp = top(&stack);
			printAns[j] = temp;
			j++;
		}
	}

	for (int i = 0; i < j; i++) {
		printf("%d\n", printAns[i]);
	}

	return 0;
}