#include "main.h"
/**
* _pow_recursion - returns x raised to power of y
*
* @x: number to be raised
* @y: power to raise number
* Return: x raised to y for y > 0, 1 for y = 0
* and -1 for y < 0;
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
