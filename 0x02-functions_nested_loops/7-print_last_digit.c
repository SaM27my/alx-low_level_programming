#include "main.h"
/**
* print_last_digit - prints the last digit of number n signs of an integer
* @n: is the number
* Descriptio: return n for positive n 0 for zero
*
* Return: n%10
*/
int print_last_digit(int n)
{
int x = n % 10;

if (n < 0)
	x = x * -1;
_putchar(x + '0');
return (x);
}
