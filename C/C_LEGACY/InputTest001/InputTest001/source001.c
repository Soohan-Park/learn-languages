#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	int age, test;
	char gender;
	double height;

	printf("���̴�? \t");
	scanf_s("%d", &age);
	printf("Ű��? \t");
	scanf_s("%lf", &height);
	printf("������? \t");
	scanf_s(" %c", &gender);

	printf("\n--------------------------------------\n");
	printf("������ ���ִ� ���ڿ��� %c �̴�.", &gender);

	
}