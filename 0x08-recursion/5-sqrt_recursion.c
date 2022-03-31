#include "main.h"
/**
*_sqrt_recursion - returns natural square root of a number
*
*@n: number
*
*Return: -1 if natural square root doesnt exist
* i if i^2 = n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (guess(n, 1));

}
/**
* guess - blank guess
*
*@n: number
*@i increment
*Return: -1
*/
int guess(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (guess(n, i + 1));
	else
		return (-1);

}
