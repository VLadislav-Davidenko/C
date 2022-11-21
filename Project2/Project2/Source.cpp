#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{

	int a, b, c, z;
	double x1, x2;
	char line[81];
	printf("Type a: ");
	gets_s(line);
	a = atoi(line);
	printf("Type b: ");
	gets_s(line);
	b = atoi(line);
	printf("Type c: ");
	gets_s(line);
	c = atoi(line);
	z = pow(b, 2) - 4 * a * c;
	if (z > 0 && a != 0)
	{
		x1 = (-b + sqrt(z)) / (2 * a);
		x2 = (-b - sqrt(z)) / (2 * a);
		printf("x1 = %lg\nx2 = %lg", x1, x2);
	}
	else 
	{
		printf("The equation has complex roots");
	}
	
	
	return 0; 
}