#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"
#include "iostream"
#include "stdarg.h"

#define LEN 5



char* CreateRandomSentence(int nWords, int n1, ...)
{ 
	va_list indic;
	va_start(indic, nWords);
	int nChars = 0, j = 0;
	for (int i = 0; i < nWords; i++, nChars += va_arg(indic, int) + 1);
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char* pResult = (char*)malloc(nChars);
	va_start(indic, nWords);
	for (int i = 0; i < nWords; i++)
	{
		int nWord = va_arg(indic, int);
		for (int k = 0; k < nWord; k++, *(pResult + j++) = alphabet[rand() % 26]);
		*(pResult + j++) = ' ';
	}
	*(pResult + nChars - 1) = 0;
	return pResult;
}

char** SentenceSplit(char* text, int* numbers) {
	int rows = 5, columns = *(numbers);
	char **ppTable = (char**)malloc(rows * sizeof(char));

	for (int i = 0; i < rows; i++) {
		*(ppTable + i) = (char*)malloc(columns * sizeof(char));
		columns = *(numbers + i);
	}
	int x = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < sizeof(*(ppTable + i)); j++) {
			*(*(ppTable + i) + j) = *(text + j + i);
			*(text) = *(text + j + i);
		}

	}
	return ppTable;
}

void main() {
	int num[LEN] = {3,4,6,1,2 };
	int *pnum = (int*)malloc(LEN * sizeof(int));

	for (int i = 0; i < LEN; i++) {
		pnum[i] = num[i];
	}
	char *ptext = CreateRandomSentence(5, 3, 4, 6, 1, 2);

	char **ppRes = SentenceSplit(ptext, pnum);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < num[i]; j++)
		{
			printf("%c", ppRes[i][j]);
		}
		printf("\n");
	}
	free(ptext);
	for (int i = 0; i < 5; i++)
	free(*(ppRes + i));
	free(ppRes);


}