#include <stdio.h>
/**
* main - uses while loop
*
* Description: printing aplhabet in lower case
* Return: 0
*
*/

int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
