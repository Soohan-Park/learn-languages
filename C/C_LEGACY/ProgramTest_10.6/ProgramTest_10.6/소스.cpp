#include "stdio.h"

void main() {
	int arr[] = { 1,2,3,4,5 };
	int *ptr = arr;

	printf("%d\n", *ptr);
	printf("%d\n", *(ptr + 1)); //int���� ���� +4 �� �ȴٴ� ������, �ǻ��� "*������+1" ���ָ� �ȴ�!
	printf("%d\n", *(ptr + 4));
	printf("%d\n", *(ptr + 3));
}