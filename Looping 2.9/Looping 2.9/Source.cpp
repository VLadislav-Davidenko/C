#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"

#define OKEY 0
#define PROBLEMS 1

char Buf1[81], Buf2[81];


void CompressText() {
	int check = 0, count = 0;
	for (int i = 0; i < 80 && Buf1[i] != '\0'; i++) {
		if (Buf1[i] == ' ' && !check) {
			check = PROBLEMS;
			Buf2[count] = ' ';
			count++;
		}
		
		if (Buf1[i] != ' '){
			check = OKEY;
			Buf2[count] = Buf1[i];
			count++;
		}

	}

	Buf2[++count] = '\0';
}

void main() {
	printf("Enter your text: ");
	gets_s(Buf1);
	CompressText();
	printf("%s", Buf2);


}