#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <math.h>

#define PI 3.141592

void main() {
	int menu;

	double r = 0;

	double ans1, ans2, ans3;

	while (1) {
		
		printf("<<����>>\n");
		printf("1. (����) �ѷ�\t2. (����) ����\t3. (����) ����\n");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
			printf("�������� ���� >> ");	scanf("%lf", &r);
			printf("-----------------------�����-------------------------\n");
			Sleep(800);
			ans1 = 2 * PI * r;
			printf("�ѷ��� %6.2lf �Դϴ�.", &ans1);
			break;

		case 2:
			printf("�������� ���� >> ");	scanf("%lf", &r);
			printf("-----------------------�����-------------------------\n");
			Sleep(800);
			ans2 = PI * pow(r,2);
			printf("���̴� %6.2lf �Դϴ�.", &ans2);
			break;

		case 3:
			printf("�������� ���� >> ");	scanf("%lf", &r);

			printf("-----------------------�����-------------------------\n");
			Sleep(800);
			ans3 = (4 / 3)*PI*pow(r,3);
			printf("���Ǵ� %lf �Դϴ�.", &ans3);
			break;
		default:
			break;
		}
		if (menu == 4)
			break;
	}
}


