#include "stdlib.h"
#include "stdio.h"

int main() {
	int x;
	char line[81];
	printf("Enter your number: ");
	gets_s(line);
	x = atoi(line);

	if (x % 2 == 0) {
		printf("This is even number");
	}
	else {
		printf("This is odd number");
	}

}