#include <stdio.h>

int main(void) {
	int num = 10;

	int* ntest = &num;

	printf("%p\n", &num);
	printf("%p\n", ntest);

	return 0;
}

// %p는 포인터의 주소를 출력하기 위해 사용되는 지정자
// 첫 printf는 num의 메모리 주소를 출력하고
// 두번째 printf는 ntest포인터 값을 출력한다.