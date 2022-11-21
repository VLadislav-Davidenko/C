#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"
#include "iostream"

#define NAME 5
#define SURNAME 7


char* CreateRandomName(int n1, int n2)
{ // n1 – length of given name, n2 – length of family name
	if (n1 <= 0 || n2 <= 0)
	{
		return 0;
	}
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char* pResult = (char*)malloc(n1 + n2 + 2); // names + space + terminating 0
	for (int i = 0; i < n1; i++)
	{
		*(pResult + i) = alphabet[rand() % 26]; // given name
	}
	*pResult = toupper(*pResult); // must start with uppercase letter
	*(pResult + n1) = ' ';
	for (int i = 0; i < n2; i++)
	{
		*(pResult + n1 + 1 + i) = alphabet[rand() % 26]; // family name
	}
	*(pResult + n1 + 1) = toupper(*(pResult + n1 + 1)); // must start with uppercase letter
	*(pResult + n1 + n2 + 1) = 0; // terminating zero
	return pResult;
}

char* Reverse(char* pc1) {
	char* pc2 = (char*)malloc(sizeof(pc1) + 1);
	for (int i = 0; i < SURNAME; i++) {
		pc2[i] = pc1[NAME + 1 + i];
	}
	pc2[SURNAME] = ',';
	pc2[SURNAME + 1] = ' ';
	for (int i = 0; i < NAME; i++) {
		pc2[SURNAME + 2 + i] = pc1[i];
	}
	return pc2;
}

void main() {
	char* name = CreateRandomName(NAME, SURNAME);

	for (int i = 0; i < NAME + SURNAME + 2; i++) {
		printf("%c", name[i]);
	}
	printf("\n");
	char* res = Reverse(name);

	for (int i = 0; i < NAME + SURNAME + 2; i++) {
		printf("%c", res[i]);
	}
	
}