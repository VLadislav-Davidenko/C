#include "stdlib.h"
#include "stdio.h"
#include "conio.h"

void main() {
	int counters[6] = { 0,0,0,0,0,0 };
	char vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };
	int i = 0;
	char c = 0;
	printf("Enter your text: ");
	
	while (c != '\r') {
		c = _getch();
		printf("%c", c);
		int j = 0;
		while (j < 6) {
			if (vowels[j] == c)
				counters[j]++;
			j++;
		}
	}
	while (i < 6) {
		printf("\n%c: %d", vowels[i], counters[i]);
		i++;
	}
	
}