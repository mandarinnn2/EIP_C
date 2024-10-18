#include <stdio.h>

struct A {
	int n;
	int g;
};

main() {
	struct A st[2];
	for (int i = 0; i < 2; i++) {
		st[i].n = i;
		st[i].g = i + 1;
	}
	printf("%d", st[0].n + st[1].g);
}

// struct(구조체): 여러 개의 서로 다른 데이터 타입을 하나의 단위로 묶어 관리할 수 있게 해주는 사용자 정의 데이터 타입이다.
// 구조체 멤버 접근시 .을 사용하고,
// 포인터를 통해 접근시 ->를 사용한다.