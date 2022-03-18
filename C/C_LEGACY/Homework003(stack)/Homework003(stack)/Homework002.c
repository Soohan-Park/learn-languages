#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "ArrayBaseStack.h"


char inputString[10000];


void main() {
	Stack stack;
	Stack temp_stack;

	//�ݺ������� �׽�Ʈ ���̽� �Է�
	int testcase;
	printf("������ �׽�Ʈ ���̽� ���� �Է��ϼ���\n>>");
	scanf("%d", &testcase);

	//�׽�Ʈ���̽� ����� �ݺ�
	for (int i = 0; i < testcase; i++) {
		
		StackInit(&stack);
		StackInit(&temp_stack);

		int flag = TRUE;

		printf("���ڿ��� �Է��ϼ���\n>>");
		scanf("%s", inputString);

		for (int i = 0; i < strlen(inputString); i++) {
			SPush(&stack, inputString[i]);
		}

		Data temp_data_pop;
		Data temp_data_peek;
		Data temp_data_pair;

		//¦ ��Ī �˰���
		while (SIsEmpty(&stack) != TRUE) {
			temp_data_pop = SPop(&stack);
			if (SIsEmpty(&stack) != TRUE) {
				temp_data_peek = SPeek(&stack);
			}

			switch (temp_data_pop)
			{
			case ')':
				if (temp_data_peek == '{' || temp_data_peek == '[') {
					flag = FALSE;
					break;
				}
				SPush(&temp_stack, temp_data_pop);
				break;
			case '}':
				if (temp_data_peek == '(' || temp_data_peek == '[') {
					flag = FALSE;
					break;
				}
				SPush(&temp_stack, temp_data_pop);
				break;
			case ']':
				if (temp_data_peek == '{' || temp_data_peek == '(') {
					flag = FALSE;
					break;
				}
				SPush(&temp_stack, temp_data_pop);
				break;

			case '(':
				if (SIsEmpty(&temp_stack) != TRUE)
					temp_data_pair = SPeek(&temp_stack);
				else {
					flag = FALSE;
					break;
				}

				if (temp_data_pair != ')') {
					flag = FALSE;
					break;
				}
				SPop(&temp_stack);

				break;
			case '{':
				if (SIsEmpty(&temp_stack) != TRUE)
					temp_data_pair = SPeek(&temp_stack);
				else {
					flag = FALSE;
					break;
				}
				
				if (temp_data_pair != '}') {
					flag = FALSE;
					break;
				}
				SPop(&temp_stack);
				break;
			case '[':
				if (SIsEmpty(&temp_stack) != TRUE)
					temp_data_pair = SPeek(&temp_stack);
				else {
					flag = FALSE;
					break;
				}

				if (temp_data_pair != ']') {
					flag = FALSE;
					break;
				}
				SPop(&temp_stack);
				break;
			default:
				printf("ERROR!");
				break;
			}
		}

		//temp_stack�� �����Ͱ� �����ִ� ���, ¦�� �ȸ������� flag = FALSE;
		if (SIsEmpty(&temp_stack) != TRUE)
			flag = FALSE;

		if (flag == FALSE)
			printf("NO\n");
		else
			printf("YES\n");
	}
}