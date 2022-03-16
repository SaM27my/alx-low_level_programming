#include "main.h"
/**
* times_table - prints the times table
*
* Return: void
*/
void times_table(void)
{

	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
		int k = i * j;
			if (k == 0)
			{
			_putchar(k + '0');
			}
			else if (k <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
