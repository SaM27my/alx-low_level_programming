#include "main.h"
/**
* print_alphabet_x10 - print a-z X10
*
* Description: print the alphabet in lower case
* Return: Always 0
*/

void print_alphabet_x10(void)
	{
		char ch = 'a';
		int i;

		for (i = 0; i < 10; i++)
		{
			while (ch <= 'z')
			{
			_putchar(ch);
			ch++;
			}

			ch = 'a';

			_putchar('\n');
		}
	}
