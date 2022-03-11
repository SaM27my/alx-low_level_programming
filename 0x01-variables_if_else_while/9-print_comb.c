#include <stdio.h>
/**
* main - function holds all the program
*
* Description: this program prints all the numbers
* single digits lik 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
* Return: 0
*/
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
	putchar(c);
	if (c != 57)
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	putchar('\n');

	return (0);


}
