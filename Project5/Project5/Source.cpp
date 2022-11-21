#include "stdlib.h"
#include "stdio.h"

void main(){
	char line[81];
	printf("Enter your text: ");
	gets_s(line);

	if ((line[0] >= 48) && (line[0] <= 57)) {
		printf("Sentence starts with a digit");
	}
	else if ((line[0] >= 65) && (line[0] <= 90)) {
		printf("Sentence starts with an uppercase letter ");
	}
	else if ((line[0] >= 97) && (line[0] <= 122)) {
		printf("Sentence starts with an lowercase letter ");
	}
	else {
		printf("Sentence starts with an undefined character ");
	}
}