#include <stdio.h>
/**
*main - no functionsother than putcha
*
* Description: this program all the hexadecimal values in lower case
*Return: 0
*/
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
	putchar(c);
	c++;
	}

	c = 'a';

	while (c <= 'f')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
