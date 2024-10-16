#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getname() {
	char* n = malloc(30);
	printf("name : ");
	gets(n); // 문자열 한 줄 입력받기 => 사용자가 입력한 문자열이 배열의 크기를 초과하는 경우를 제한하기 위해 fgets()를 쓰는 것이 좋다.
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

// n이 전역변수이기 때문에 getname() 함수를 호출할 때마다 이 배열에 입력받은 문자열이 저장된다.
// getname() 함수가 호출될 때마다 n배열의 주소를 반환한다.
// 즉 n1, n2, n3 모두 같은 n 배열의 주소를 참조하므로 출력 결과는 마지막 입력이 된다.
// 기존코드에서 입력에 따라 출력을 다르게 만들고 싶다면 동적 메모리 할당에 사용되는 malloc를 사용하면 된다.
// 기존 전역변수 char n[30]; 을
// 메서드 getname()내에 char* n = malloc(30); 코드로 변경하면 된다!