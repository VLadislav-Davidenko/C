#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"

#define COLUMNS 5
#define ROWS 5

char Table[COLUMNS][ROWS];

void FillTheTable() {
	char c = '-';
	for (int i = 0; i < COLUMNS; i++) {

		for (int j = 0; j < ROWS; j++) {
			if (j == i) {
				Table[i][j] = '*';
			}
			else if (j < i) {
				Table[i][j] = '-';
			}
			else{
				Table[i][j] = '+';
			}
			

		}
	}
}

void main(){
	FillTheTable();
	for (int i = 0; i < COLUMNS; i++) {
		for (int j = 0; j < ROWS; j++) {
			printf("%c ", Table[i][j]);
		}
		printf("\n");
	}


}