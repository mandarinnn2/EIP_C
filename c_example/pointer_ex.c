#include <stdio.h>
#define MAX_SIZE 10

int isWhat[MAX_SIZE];
int point = -1;

void into(int num) {
	if (point >= 10) printf("Full");
	isWhat[++point] = num;
}

int take() {
	if (isEmpty() == 1) printf("Empty");
	return isWhat[point--];
}

int isEmpty() {
	if (point == -1) return 1;
	return 0;
}

int isFull() {
	if (point == 10) return 1;
	return 0;
}

int main(int argc, char const* argv[]) {
	int e;
	into(5); into(2);
	while (!isEmpty()) {
		printf("%d", take());
		into(4); into(1); printf("%d", take());
		into(3); printf("%d", take()); printf("%d", take());
		into(6); printf("%d", take()); printf("%d", take());
	}
	return 0;
}

// 스택을 구현한 코드이다
// into()를 사용하면 스택에 순서대로 수를 넣고
// take()를 사용하면 스택에 순서대로 수를 빼낸다.