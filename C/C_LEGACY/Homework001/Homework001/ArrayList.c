#include <stdio.h>
#include "ArrayList.h"
#include <string.h>


void ListInit(List * plist)
{
	(plist->numOfData) = 0;
	(plist->curPosition) = -1;
}

void LInsert(List * plist, LData data)
{
	if(plist->numOfData > LIST_LEN) 
	{
		puts("������ �Ұ����մϴ�.");
		return;
	}

	plist->arr[plist->numOfData] = data;
	(plist->numOfData)++;
}

int LFirst(List * plist, LData * pdata)
{
	if(plist->numOfData == 0)
		return FALSE;

	(plist->curPosition) = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List * plist, LData * pdata)
{
	if(plist->curPosition >= (plist->numOfData)-1)
		return FALSE;

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LData LRemove(List * plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];

	for(i=rpos; i<num-1; i++)
		plist->arr[i] = plist->arr[i+1];

	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}

void LSort(List * plist) {

	LData idx;
	
	for (int i = 0; i < plist->numOfData; i++) {
		for (int j = 0; j < plist->numOfData; j++) {
			if (strcmp(plist->arr[i]->name, plist->arr[j]->name) < 0) {
				idx = plist->arr[i];
				plist->arr[i] = plist->arr[j];
				plist->arr[j] = idx;
			}
		}
	}
}

void LPrintAll(List * plist) {
	for (int i = 0; i < plist->numOfData; i++) {
		ShowNameCardInfo(plist->arr[i]);
	}
}