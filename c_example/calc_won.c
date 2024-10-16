#include <stdio.h>

main() {
	int m = 4620;
	int a = m / 1000;
	int b = m % 1000 / 500;
	int c = m % 500 / 100;
	int d = m % 100 / 10;

	printf("1000won : %d\n", a);
	printf("500won : %d\n", b);
	printf("100won : %d\n", c);
	printf("10won : %d\n", d);
}