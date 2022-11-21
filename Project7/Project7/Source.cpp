#include "stdlib.h"
#include "stdio.h"

void main() {
	int Fib[20], i1 = 1, i2 = 1, i = 2;
	Fib[0] = i1;
	Fib[1] = i2;

	printf("1\n1\n");

	while (i < 20) {
		Fib[i] = i1 + i2;
		i1 = i2;
		i2 = Fib[i];
		printf("%d\n", Fib[i]);
		i++;
	}

}