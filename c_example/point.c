#include<stdio.h>

int main() {
	int a[4] = { 0, 2, 4, 8 };
	int b[3];
	int* p;
	int sum = 0;

	for (int i = 1; i < 4; i++) {
		p = a + i; // p는 포인터이기 때문에 i가 1일 때, a = 0, a + i = 2가 된다.
		b[i - 1] = *p - a[i - 1]; 
		sum = sum + b[i - 1] + a[i];
	}
	printf("%d", sum);

	return 0;
}