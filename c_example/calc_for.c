#include <stdio.h>

main() {
	int n[] = { 5, 4, 3, 2, 1 };
	for (int i = 0; i < 5; i++)
		printf("%d", n[(i+1)%5]);
}