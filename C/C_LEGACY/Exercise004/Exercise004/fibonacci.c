#include "fibonacci.h"


int fibonacci(int n) {
	Enqueue(&q, 0);	Enqueue(&q, 1);

	int temp;

	for (int i = 2; i <= n; i++) {
		temp = Dequeue(&q) + QPeek(&q);
		//temp = QPeek(&q) + Dequeue(&q); <----�̷��� �ϸ� ����!! Qpeek�� �� �Ʒ��� �� �����͸� ������. �׷��Ƿ� ���� �����͸� ������ ������!
		Enqueue(&q, temp);
		//Enqueue(&q, Dequeue(&q) + QPeek(&q));
	}

	return temp;
}