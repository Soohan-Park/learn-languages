#include "CLinkedList.h"
#include "stdio.h"


int C, N, K;
int data;

void setInput() {
	printf("N �Է� >> ");
	scanf_s("%d", &N);
	printf("K �Է� >> ");
	scanf_s("%d", &K);
}

void main(){
    List list;
    ListInit(&list);

	printf("C �Է� >> ");
	scanf_s("%d", &C);

	setInput();

	// for --- C
	for (int z = 0; z < C; z++) {

		// �ι�° ���̽� �̻� ���۽�, �ʱ�ȭ
		if (z != 0) {
			printf("\n");
			setInput();
			ListInit(&list);
		}

		//N�� �����
		for (int i = 0; i < N; i++) {
			LInsert(&list, i + 1);
		}


		LFirst(&list, &data);

		//�ڻ�
		while (LCount(&list) != 2) {

			LRemove(&list);

			for (int x = 0; x < K; x++) {
				LNext(&list, &data);
			}
		}

		//���
		printf("\n\n�����ڴ�\n");
		for (int y = 0; y < LCount(&list); y++) {
			printf("%d\t", data);
			LNext(&list, &data);
		}
		printf("\n");
	}
}