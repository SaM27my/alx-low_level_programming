#include "main.h"
/**
* _strpbrk - searches a string of any set of bytes
*
* @s: for the count of characters
* @accept: string pointer to cmpr
* Return: number of bytes
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	const char *a = accept;

	while (*a != '\0')
	if (*a++ == *s)
	return ((char *) s);
	++s;
	}

return ('\0');
}
