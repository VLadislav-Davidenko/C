#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"


int *RandomArray(int n) {
	int *pRand = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		*(pRand + i) = rand();
		//pRand[i]
	}
	return pRand;
}
void main() {
	int* pr = RandomArray(100);
	for (int i = 0; i < 10; i++)
		//printf("%d ", *(pr + i));
		printf("%d ", pr[i]);

	free(pr);
}
