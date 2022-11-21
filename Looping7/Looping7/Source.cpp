#include "stdlib.h"
#include "stdio.h"

void main() {
	char line[81];
	int a = 0, e = 0, i = 0, o = 0, u = 0, y = 0, x = 0;
	printf("Enter your text: ");
	gets_s(line);

	while (line[x] != '\0') {
		if (line[x] == 'a')
			a++;
		else if (line[x] == 'e')
			e++;
		else if (line[x] == 'i')
			i++;
		else if (line[x] == 'o')
			o++;
		else if (line[x] == 'u')
			u++;
		else if (line[x] == 'y')
			y++;
		x++;
	}
	printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\ny = %d\n", a, e, i, o, u, y);
}