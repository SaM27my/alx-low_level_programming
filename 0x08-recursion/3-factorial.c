#include "main.h"
/**
* factorial - returns factorial of a given number
*
*@n: given number
*
*Return: factorial of a number;
*/
int factorial(int n)
{
	unsigned int c = n;

	if (n < 0)
	{
	return (-1);
	}

	if (c == 0)
	{
		return (1);
	}
	n--;
	return (c * factorial(n));
}
