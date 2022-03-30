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
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
