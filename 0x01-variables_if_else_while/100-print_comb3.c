#include <stdio.h>
/**
* main - the only function
*
*Description: printing all two digit combinations
*
*Return: 0
*/

int main(void)
{
	int i = 48;


	while (i <= 57)
	{

	int j = 48;

	while (j <= 57)
		{
		if (j > i)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
		j++;
		}
	i++;
	}
	putchar('\n');

	return (0);
}
