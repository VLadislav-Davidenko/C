#include "stdlib.h"
#include "stdio.h"

void main() {
	char line[81];
	int i = 0, num_a = 0, num_A = 0;
	printf("Enter your text: ");
	gets_s(line);

	while (line[i] != '\0') {
		if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122)) {
			if (line[i] == 65) {
				num_A++;
			}
			else if (line[i] == 97) {
				num_a++;
			}
		}
		else {
			printf("Illegal input");
			break;
		}
		i++;
	}
	printf("\nA = %d\na = %d", num_A, num_a);


}