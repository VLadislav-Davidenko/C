#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"


double TempConverter(double t, char c) {
	if (c == 'f') {
		return t * 9 / 5 + 32;
	}
	else if (c == 'c') {
		return (t - 32) * 5 / 9;
	}
	else
		return NAN;
}


void main() {
	char line[81];
	char conv;
	double temp, res;
	printf("Enter tempreture: ");
	gets_s(line);
	temp = atoi(line);
	printf("Convert to Farhenheit - f or Celsius - c: ");
	conv = _getche();
	res = TempConverter(temp, conv);
	if (isnan(res))
		printf("\n[-] Error input");
	else
		printf("\nThe result is - %lg", res);
}