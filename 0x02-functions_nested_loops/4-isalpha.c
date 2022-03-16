#include "main.h"
/**
* _isalpha - prints 0 for non alphaet and 1 for alphabets
* @c: - int value of character
* Description: a function that checks for character
* to be an alphabet or not
* Return: 1 if c is alphabet 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
