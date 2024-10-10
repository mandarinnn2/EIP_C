#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str); // 8
    char temp;
    char* p1 = str; 
    char* p2 = str + len - 1; // str + 7
    while (p1 < p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}

int main(int argc, char* argv[]) {
    char str[100] = "ABCDEFGH";

    reverse(str);

    int len = strlen(str);

    for (int i = 1; i < len; i += 2) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;

}


// ��ó���� ������ ���� ���� Ǯ ��, while������ ���� ������ �ɸ��� �ʳ�? ��� �߸� �����߾���.
// �׷��� �˰��� p1++�� p2--�� ���� *p1++�� *p2--�� �߸� �����ߴ�.

// �ùٸ� �ؼ�
// p1++�� p2-- �ڵ带 �����ϸ� �ܼ��� �����͸� ���� ���ڷ� �̵������ش�.
// �׷��� ���� ���� A�� H�� ����Ų�ٸ�, B�� G�� �����͸� �̵��ϴ� ���̴�.

// ���� 1
// char value = *p1;
// p1++;

// ���� 2
// char value = *p1++;  

// ���� 1�� 2�ڵ�� �����ϴ�