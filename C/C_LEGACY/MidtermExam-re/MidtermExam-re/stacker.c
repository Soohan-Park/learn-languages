#include <stdio.h>
#include <stdlib.h>
#include "stacker.h"

void StackInit(Stack * pstack)
{
	pstack->topIndex = -1;
}

int SIsEmpty(Stack * pstack) //������ ��������� 1, �ƴϸ� 0 ���
{
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack * pstack, Data data) //���� x �� ���ÿ� �״´�.
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack * pstack) //���ÿ��� ���� ���� �ִ� ������ ���� ��ȯ, ���ÿ� ������ ���ٸ� -1 ���
{
	int rIdx;

	if (SIsEmpty(pstack))
	{
		return -1;
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rIdx];
}

Data SPeek(Stack * pstack) //������ ���� ���� �ִ� ���� ��ȯ. ������� -1 ��ȯ.
{
	if (SIsEmpty(pstack))
	{
		return -1;
	}

	return pstack->stackArr[pstack->topIndex];
}

int SSize(Stack * pstack) { //������ ������ ��ȯ.
	return pstack->topIndex+1; //������ ������ �ε������� 1 ��ŭ ũ��.
}


