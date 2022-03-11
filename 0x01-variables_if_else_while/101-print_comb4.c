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

		int k=48;
		while (k <= 57)
			{
			if ( k > j && j>i)
				{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k!= 57)
					{
					putchar(',');
					putchar(' ');
					}
			k++;	}
			}
		j++;
		}
	i++;
	}
	putchar('\n');

	return (0);
}
