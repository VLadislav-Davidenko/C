#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"
#include "iostream"
#include "stdarg.h"

#pragma warning(disable:4996)
#define LEN 81

int lenOfName = 0;

int CalculateLen(char text[]) {
	int i = 0;
	while (text[i] != '\0') {
		i++;
	}
	return i;
}

int RemoveName(char* pNames, char* pNameToRemove) {
	int res = 0;
	int num = 0;
	for (int i = 0; i < LEN; i++) {
		res = memcmp(pNames + i, pNameToRemove, lenOfName);
		if (res == 0) {
			memmove(pNames + i - 1, pNames + i + lenOfName, LEN);
			for (int i = 0; i < LEN; i++) {
				if (pNames[i] == '\0')
					break;
				printf("%c", pNames[i]);
			}
			return 1;
		}
	}
	return 0;
}

int main() {
	char listNames[LEN];
	char name[LEN];
	printf("Please enter names: ");
	scanf("%s", listNames);
	printf("\nPlease enter name that you want to remove: ");
	scanf("%s", name);

	lenOfName = CalculateLen(name);

	char* pNames = (char*)malloc(LEN);
	char* pNameToRemove = (char*)malloc(lenOfName);

	memcpy(pNames, listNames, LEN);
	memcpy(pNameToRemove, name, lenOfName);

	int res = RemoveName(pNames, pNameToRemove);

	printf("\n%d", res);
	return 0;
}