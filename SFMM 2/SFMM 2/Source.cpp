#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"
#include "iostream"
#include "stdarg.h"

#pragma warning(disable:4996)
#define LEN 32


int CalculateLen(char text[]) {
	int i = 0;
	while (text[i] != '\0') {
		i++;
	}
	return i;
}

int InsertName(char* pNames, int n, char* pNameToInsert) {
	int res = 0;
	if (n >= 7) {
		return 0;
	}
	else {
		memmove(pNames + n + 1, pNames, LEN + 7);
		for (int i = 0; i < n; i++) {
			pNames[i] = pNameToInsert[i];
		}
		pNames[n] = ',';
	}
	int numOfListNames = CalculateLen(pNames);
	for (int i = 0; i < numOfListNames; i++) {
		printf("%c",pNames[i]);
	}
	return 1;
}

int main() {
	char listNames[LEN];
	char name[81];
	printf("Please enter names: ");
	scanf("%s", listNames);
	printf("\nPlease enter name that you want to insert: ");
	scanf("%s", name);

	int numOfName = CalculateLen(name);

	char* pNames = (char*)malloc(LEN + 7);
	char* pNameToInsert = (char*)malloc(numOfName);

	memcpy(pNames, listNames, LEN);
	memcpy(pNameToInsert, name, numOfName);

	int res = InsertName(pNames, numOfName, pNameToInsert);

	printf("\n%d", res);
	return 0;
}