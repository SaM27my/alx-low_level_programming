#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sums of two diagonals of arr[][]
*
*@a: array whose sums is printed
*@size:  size of the array
*
*/
void print_diagsums(int *a, int size)
{
	int i, sumd1, sumd2;

	sumd1 = 0;
	sumd2 = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sumd1 += a[i];
	}
	for (i = size - 1; i < size * size - (size - 1); i += (size - 1))
	{
		sumd2 += a[i];
	}

	printf("%d, %d\n", sumd1, sumd2);

}
