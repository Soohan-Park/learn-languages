#include "stdio.h"

#define DEFAULT_FEE 10000
#define DEFAULT_TEXT_OVER20 20
#define DEFAULT_VOICE_UNDER100 100
#define DEFAULT_VOICE_OVER100 80
#define INCLUDE_VAT 1.1

int voice_charge(int minute);
int text_charge(int times);
int calc(int cost1, int cost2);

void main() {
	int minute, times;

	printf("���� ��ȭ �ð���(��)? ");
	scanf_s("%d", &minute);
	printf("���� ���� �Ǽ���? ");
	scanf_s("%d", &times);

	int cost1 = voice_charge(minute);
	int cost2 = text_charge(times);
	int total = calc(cost1, cost2);

	printf("�޴��� ��� ��� û����\n");
	printf("=============================================\n");
	printf("���� ��ȭ �ð� \t%d ��\n", minute);
	printf("���� ���� �Ǽ� \t%d ��\n", times);
	printf("---------------------------------------------\n");
	printf("�⺻ ��� \t%d��\n", DEFAULT_FEE);
	printf("���� ��ȭ�� %d �� \t%d��\n", minute, cost1);
	printf("���� ���۷� �ʰ� %d ��(20�� ����) \t%d��\n", times - 20, cost2);
	printf("---------------------------------------------\n");
	printf("�հ� \t%d��\n", total);
	printf("�ΰ���(10%%) \t%d��\n", (int)(total*0.1));
	printf("=============================================\n");
	printf("�̹� �� ��� \t%d��\n", (int)(total*INCLUDE_VAT));


}

int voice_charge(int minute) {
	if (minute <= 100)
		return minute * DEFAULT_VOICE_UNDER100;
	else
		return minute * DEFAULT_VOICE_OVER100;
}

int text_charge(int times) {
	if (times <= 20)
		return 0;
	else
		return (times-20) * DEFAULT_TEXT_OVER20;
}

int calc(int cost1, int cost2) {
	return (DEFAULT_FEE + cost1 + cost2);
}
