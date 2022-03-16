#include "main.h"
/**
* print_alphabet - print a-z X10
*
* Description: print the alphabet in lower case
* Return: Always 0
*/

void print_alphabet(void)
	{
		char ch = 'a';

		for (int i = 0; i < 10; i++)
		{
			while (ch <= 'z')
			{
			_putchar(ch);
			ch++;
			}
			_putchar('\n');
		}
	}
