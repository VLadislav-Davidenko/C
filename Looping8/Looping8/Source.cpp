#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

void main() {
	char text[21];
	char c = 0;
	int i = 0;
	printf("Enter your text: ");

	while ((i < 20) && (c != 27)) {
		c = _getch();
		printf("%c", c);
		text[i] = c;
		i++;
	}
	text[i] = '\0';
	printf("\nResult is : %s\n", text);
}