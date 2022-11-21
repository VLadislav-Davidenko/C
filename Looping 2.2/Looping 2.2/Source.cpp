#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"

#define SUCCESS 0
#define PARAMETR_TOO_LARGE 1
#define	PARAMETR_TOO_SMALL 2
#define	PARAMETR_IS_ZERO 3


int RandVal[100];
int error_check = 0;

int GetRandArray(int num) {
	int max = 0;

	if (num > 100) {
		error_check = PARAMETR_TOO_LARGE;
		num = 50;
	}
	else if (num < 0) {
		error_check = PARAMETR_TOO_SMALL;
		num = 50;
	}
	else if (num == 0) {
		error_check = PARAMETR_IS_ZERO;
		num = 50;
	}
	
	for (int i = 0; i < num; i++) {
		RandVal[i] = rand();
		if (RandVal[i] >= max){
			max = RandVal[i];
		}
	}

	return max;

}

void main() {
	char line[81];
	int x, res;
	printf("Enter the amount of numbers: ");
	gets_s(line);
	x = atoi(line);
	res = GetRandArray(x);
	if (error_check != SUCCESS)
	{
		if (error_check == PARAMETR_TOO_LARGE)
			printf("You entered too large num so it was used 50\n");
		else if (error_check == PARAMETR_TOO_SMALL)
			printf("You entered too large num so it was used 50\n");
		else
			printf("You entered too large num so it was used 50\n");
	}
	printf("The max is - %d", res);


}