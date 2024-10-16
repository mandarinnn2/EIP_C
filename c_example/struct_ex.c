#include <stdio.h>
struct insa {
	char name[10];
	int age;
	struct insa* impl_a;
	struct insa* inpl_b;
};

main() {
	struct insa p1 = { "Kim", 28, NULL, NULL };
	struct insa p2 = { "Lee", 36, NULL, NULL };
	struct insa p3 = { "Park", 41, NULL, NULL };
	p1.impl_a = &p2;
	p2.impl_a = &p3;
	printf("%s\n", p1.impl_a->name);
	printf("%d", p2.impl_a->age);
}

// struct 구조체: 여러 개의 서로 다른 데이터 타입을 하나의 단위로 묶어 관리할 수 있게 해주는 사용자 정의 데이터 타입.
// 구조체 멤버 접근시 .을 사용하고
// 포인터를 통해 접근시 -> 을 사용한다.