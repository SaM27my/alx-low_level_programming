#include "main.h"
/**
* print_sign - prints the signs of an integer
* @n: is the integer whose value is evaluated
* Descriptio: return 1 for positive n 0 for zero n
* and -1 for negative n
* Return: -1 for -ve 0 for zero and 1 for +ve
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
