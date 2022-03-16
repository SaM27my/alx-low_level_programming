#include "main.h"
/**
* _islower - prints 0 for non lower case and 1 for
* lower case
* @c: - int value of character
* Description: a function that checks for lower case character
*
* Return: 1 if c is lower case 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}
