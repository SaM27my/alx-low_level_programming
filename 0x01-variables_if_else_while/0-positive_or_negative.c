#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints wheather number is positive negative or zero
*
* Description: prints wheather number is positive negative or zero
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is postive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}