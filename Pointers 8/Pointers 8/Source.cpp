#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"

#define LEN 20


char *CreateRandomString(int n) {
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char* pResult = (char*)malloc(n + 1);

	for (int i = 0; i < n; i++) {
		pResult[i] = alphabet[rand() % 26];
	}
	*(pResult + n) = 0;
	return pResult;
}

char *Reverse(char* pc1) {
	char* pc2 = (char*)malloc(sizeof(pc1));
	for (int i = 0; i < LEN; i++) {
		pc2[i] = pc1[LEN - 1 - i];
	}
	return pc2;
}

void main() {
	char* pc = CreateRandomString(LEN);
	for (int i = 0; i < LEN; i++) {
		printf("%c", pc[i]);
	}
	printf("\n");
	char* prev = Reverse(pc);
	for (int i = 0; i < LEN; i++) {
		printf("%c", prev[i]);
	}
	free(pc);
}