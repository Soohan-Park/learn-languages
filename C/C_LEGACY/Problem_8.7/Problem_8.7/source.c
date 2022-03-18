#include "stdio.h"

int year;
int month;
int day;

int last_day(int year, int month);

void main() {
	printf("���� �Է� >> "); scanf_s("%d", &year);
	printf("�� �Է� >> "); scanf_s("%d", &month);
	printf("\n");
	day = last_day(year, month);
	printf("%d�� %d���� ������ ���� %d�� �Դϴ�.", year, month, day);
}

int last_day(int year, int month) {
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 2:
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			return 29;
		else
			return 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�\n");
		getchar(); //flush buffer
		main(); //call back
		break;
	}
}