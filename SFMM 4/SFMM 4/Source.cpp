#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"
#include "iostream"
#include "stdarg.h"

#pragma warning(disable:4996)
#define LEN 81

char Buf1[81], Buf2[81];


int CalculateLen(char text[]) {
	int i = 0;
	while (text[i] != '\0') {
		i++;
	}
	return i;
}

int RemoveName(char* pNames, char* pNameToRemove) {
	int res = 0;
	int x = 0;
	int num = 0;
	for (int i = 0; i < LEN; i++) {
		if (pNames[i] == ',' || pNames[i] == '\0') {
			num = CalculateLen(Buf2);
			res = memcmp(Buf1, Buf2, LEN);
			if (res == 0) {
				memmove(pNames + i - num - 1, pNames + i, LEN);
				for (int i = 0; i < LEN; i++) {
					if (pNames[i] == '\0')
						break;
					printf("%c", pNames[i]);
				}
				return 1;
			}
			for (int i = 0; i < LEN; i++) {
				Buf2[i] = 0;
			}
			x = 0;
		}
		else {
			Buf2[x] = pNames[i];
			x++;
		}
	}
	return 0;
}

int main() {
	char listNames[LEN];
	printf("Please enter names: ");
	scanf("%s", listNames);
	printf("\nPlease enter name that you want to remove: ");
	scanf("%s", Buf1);

	int numOfName = CalculateLen(Buf1);

	char* pNames = (char*)malloc(LEN);
	char* pNameToRemove = (char*)malloc(numOfName);

	memcpy(pNames, listNames, LEN);
	memcpy(pNameToRemove, Buf1, numOfName);

	int res = RemoveName(pNames, pNameToRemove);

	printf("\n%d", res);
	return 0;
}