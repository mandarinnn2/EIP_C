#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getname() {
	char* n = malloc(30);
	printf("name : ");
	gets(n); // ���ڿ� �� �� �Է¹ޱ� => ����ڰ� �Է��� ���ڿ��� �迭�� ũ�⸦ �ʰ��ϴ� ��츦 �����ϱ� ���� fgets()�� ���� ���� ����.
	return n;
}

int main() {
	char* n1 = getname();
	char* n2 = getname();
	char* n3 = getname();
	printf("%s\n", n1);
	printf("%s\n", n2);
	printf("%s\n", n3);
}

// n�� ���������̱� ������ getname() �Լ��� ȣ���� ������ �� �迭�� �Է¹��� ���ڿ��� ����ȴ�.
// getname() �Լ��� ȣ��� ������ n�迭�� �ּҸ� ��ȯ�Ѵ�.
// �� n1, n2, n3 ��� ���� n �迭�� �ּҸ� �����ϹǷ� ��� ����� ������ �Է��� �ȴ�.
// �����ڵ忡�� �Է¿� ���� ����� �ٸ��� ����� �ʹٸ� ���� �޸� �Ҵ翡 ���Ǵ� malloc�� ����ϸ� �ȴ�.
// ���� �������� char n[30]; ��
// �޼��� getname()���� char* n = malloc(30); �ڵ�� �����ϸ� �ȴ�!