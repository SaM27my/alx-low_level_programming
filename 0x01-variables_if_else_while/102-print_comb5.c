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
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58 ; j++)
		{
			for (k = 48; k < 58 ; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (k > i || (k == i && l > j))
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}


	}
	putchar('\n');

	return (0);
}
