#include "���.h"
#include "stdio.h"

void main() {
	printf("�Է� >> ");
	int ans;
	scanf_s("%d", &ans);
	printf("%d �� ������ %d\n%d�� �������� %d\n", ans, SQUARE(ans), ans, CUBE(ans));
}