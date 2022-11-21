#include "stdlib.h"
#include "stdio.h"
#include "conio.h"


int MaxOfThree(int a, int b, int c) {
	if (a >= b && a > c)
		return a;
	else if (b >= c && b > a)
		return b;
	else
		return c;
}

void main() {
	int x, y, z, res;
	char line[81];
	printf("Enter your first number: ");
	gets_s(line);
	x = atoi(line);
	printf("Enter your second number: ");
	gets_s(line);
	y = atoi(line);
	printf("Enter your third number: ");
	gets_s(line);
	z = atoi(line);
	res = MaxOfThree(x, y, z);
	printf("The biggest one is: %d", res);
}

