#include <stdio.h>
#include <windows.h>

int main() {

	char wanna;
	char ans;
	int DIFF = 32;

	while (100) {
		
		printf("��->�� �Ǵ� ��->�� �� ��ȯ�ϰ� ���� ���ڸ� �Է��Ͻÿ�\n>>");
		wanna = getchar();

		if (wanna > 'Z') {
			printf("<<<<<��ȯ��>>>>>\n");
			Sleep(800);
			ans = wanna - DIFF;
			printf("��� ���� %c �Դϴ�.\n", ans);
		}
		
		// printf�� ������ &ans �� ������, ����ؼ� ���� ���� ���ڸ� ��µǾ���.
		// ������, printf ������ �ּҰ� �ƴ� ������ ���� �����;� �ϹǷ� ������ �ּҸ� �������ִ� & �� �ʿ����.
		// ���� ���� ���� ����(�ּҸ� char ���·� ���)�� �ݺ��ؼ� ������(������ ������ ���ص� ������ �ּҴ� ����) ���� �ذ�.

		else {
			printf("<<<<<��ȯ��>>>>>\n");
			Sleep(800);
			ans = wanna + DIFF;
			printf("��� ���� %c �Դϴ�.\n", ans); 
		}

		getchar();
	}
	return 0;
}