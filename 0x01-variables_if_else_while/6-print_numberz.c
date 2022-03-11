#include <stdio.h>
/**
* main -the main function uses while loop function
*
* Description: print base ten single digit numbers
*
* Return:0
*/
int main(void)
{

	int n = 0;

	while (n <= 9)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
