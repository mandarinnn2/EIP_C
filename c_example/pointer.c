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


// 맨처음에 포인터 지식 없이 풀 때, while문에서 무한 루프가 걸리지 않나? 라고 잘못 이해했었다.
// 그런데 알고보니 p1++와 p2--를 각각 *p1++와 *p2--로 잘못 이해했다.

// 올바른 해석
// p1++와 p2-- 코드를 실행하면 단순히 포인터를 다음 문자로 이동시켜준다.
// 그래서 각각 만약 A와 H를 가리킨다면, B와 G로 포인터를 이동하는 것이다.

// 예시 1
// char value = *p1;
// p1++;

// 예시 2
// char value = *p1++;  

// 예시 1과 2코드는 동일하다