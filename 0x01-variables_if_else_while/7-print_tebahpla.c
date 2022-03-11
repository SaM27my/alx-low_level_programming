#include <stdio.h>
/**
* main - uses while loop
*
* Description: printing aplhabet in reverse
* Return: 0
*
*/

int main(void)
{

	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
