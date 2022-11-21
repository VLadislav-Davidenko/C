#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"
#include "ctype.h"

#define COUNTS_VOWELS 'v'
#define COUNTS_CONSONANTS 'c'
#define EXIT 'x'
#define END '\0'

char Buf[81];
char Vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };

int CountsVowels() {
	int x = 0, counter = 0;
	char l;
	while (Buf[x] != END) {
		if (isalpha(Buf[x])) {
			l = tolower(Buf[x]);
			for (int i = 0; i < 6; i++) {
				if (Vowels[i] == l) {
					counter++;
					break;
				}
			}
		}
		x++;
	}
	return counter;
}

int CountsConsonants() {
	int x = 0, counter = 0, check = 0;
	char l;
	while (Buf[x] != END) {
		l = tolower(Buf[x]);
		for (int i = 0; i < 6; i++) {
			if (Vowels[i] == l) {
				check = 1;
				break;
			}
		}
		if (!check && isalpha(Buf[x])) {
			counter++;
		}
		check = 0;
		x++;
	}
	return counter;

}

void Reset() {
	printf("\nv - count vowels\nc - count consonants\nx - exit\n");
	printf("Enter your text: ");
	for (int i = 0; i < 81; i++) {
		Buf[i] = '\0';
	}
}


void main() {
	char c = 0, res;
	int i = 0;
	printf("v - count vowels\nc - count consonants\nx - exit\n");
	printf("Enter your text: ");
	while (c != EXIT) {
		c = _getch();
		if (tolower(c) == COUNTS_VOWELS) {
			Buf[i] = END;
			printf("\nType input sentence");
			res = CountsVowels();
			printf("\nThere are %d vowel(s)", res);
			Reset();
			i = 0;
		}
		else if (tolower(c) == COUNTS_CONSONANTS) {
			Buf[i] = END;
			printf("\nType input sentence");
			printf("\nThere are %d consonant(s)", CountsConsonants());
			Reset();
			i = 0;
		}
		else {
			printf("%c", c);
			Buf[i] = c;
			i++;
		}
	}

}