#include "main.h"
/**
* _puts_recursion - prints a string followed by new line
*
*@s: string to print
*
*
*/
void _puts_recursion(char *s)
{
	while (*s)
	{
	_putchar(*s++);
	}
	_putchar('\n');
}
