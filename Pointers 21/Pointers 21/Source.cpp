#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "conio.h"
#include "iostream"

#define OK 0
#define NEG 1
#define ZERO 2
#define BIG 3
#define POINT 4
#define EMT 5



int* CreateRandomArray(int n, int lower, int upper)
{
	if (n <= 0 || lower >= upper)
	{
		return 0;
	}
	int* pResult = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		*(pResult + i) = lower + rand() % (upper - lower + 1);
	}
	return pResult;
}

int CheckSum(int *pa, int n, int *pe) {
	int res = 0;
	if (pa == nullptr) {
		*pe += 5;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if (*(pa + i) < 0) {
			*pe += 1;
			break;
		}
		else if (*(pa + i) == 0) {
			*pe += 2;
			break;
		}
		else if (*(pa + i) > 100) {
			*pe += 3;
			break;
		}
		else if (pa + i == 0) {
			*pe += 4;
			break;
		}
		else {
			res += *(pa + i);
		}
	}
	return res;

}

void main() {
	char n[81];
	int x = 0, res = 0;
	// Storing Error code
	int* pErrors = (int*)malloc(6 * sizeof(int));
	for (int i = 0; i < 6; i++) {
		*(pErrors + i) = i;
	}
	printf("Input the length of num array: ");
	gets_s(n);
	x = atoi(n);

	int* num_arr = CreateRandomArray(x, 10, 20);
	res = CheckSum(num_arr, x, pErrors);

	switch (*pErrors) {
	case 0:
		printf("The Sum of array is: %d\n", res);
		break;
	case 1:
		printf("[-] Negative number\n");
		break;
	case 2:
		printf("[-] Zero number\n");
		break;
	case 3:
		printf("[-] Too big number\n");
		break;
	case 4:
		printf("[-] Point to zero\n");
		break;
	case 5:
		printf("[-] No number exists\n");

	}

	for (int i = 0; i < x; i++) {
		printf("%d	", num_arr[i]);
	}
	free(num_arr);
	free(pErrors);
}