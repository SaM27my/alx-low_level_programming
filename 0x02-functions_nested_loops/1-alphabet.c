#include "main.h"
/**
* print_alphabet - print a-z
*
* Description: print the alphabet in lower case
* Return: Always 0
*/

void print_alphabet(void)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}
		_putchar('\n');
	}
