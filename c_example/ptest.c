#include <stdio.h>

int main(void) {
	int num = 10;

	int* ntest = &num;

	printf("%p\n", &num);
	printf("%p\n", ntest);

	return 0;
}

// %p�� �������� �ּҸ� ����ϱ� ���� ���Ǵ� ������
// ù printf�� num�� �޸� �ּҸ� ����ϰ�
// �ι�° printf�� ntest������ ���� ����Ѵ�.