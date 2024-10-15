#include<stdio.h>

int main() {
	int n[3] = { 73, 95, 82 };
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		sum += n[i];
	}

	switch (sum / 30) {
	case 10:
	case 9: printf("A");
	case 8: printf("B");
	case 7:
	case 6: printf("C");
	default: printf("D");
	}
}

// switch문의 default값은 조건과 관계없이 무조건 출력된다.
// case의 조건에 맞는 부분부터 마지막까지 순서대로 출력한다.
// 이 코드의 경우 8부터 default까지 모든 printf문이 출력된다.