#include "stdlib.h"
#include "stdio.h"

void main() {
	int Rand[50], i = 0, check = 0;

	while (i < 50) { 
		Rand[i] = rand();
		if (check < Rand[i]) {
			check = Rand[i];
		}
		printf("%d\n", Rand[i]);
		i++;
	}
	printf("max = %d", check);

}