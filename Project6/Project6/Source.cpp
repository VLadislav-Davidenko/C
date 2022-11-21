#include "stdlib.h"
#include "stdio.h"

void main() {
	int i = 1;
	while (i <= 50) {
		int r = rand();
		char line[81];

		if (r >= 500) {
			printf("%d", r);
		}
		printf("\n");
		i++;
		
	}
}