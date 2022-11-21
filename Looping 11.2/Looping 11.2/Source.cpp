#include "stdlib.h"
#include "stdio.h"
#include "conio.h"

void main() {
	char buf[20];
	char line[81];
	int i = 0, j = 0;

	printf("Enter your text: ");
	gets_s(line);

	while (line[i] != '\0') {
		if (line[i] >= 48 && line[i] <= 57) {
			buf[j] = line[i];
			j++;
		}
		i++;
	}
	int x = atoi(buf);
	printf("Your number is: %d", x);
}