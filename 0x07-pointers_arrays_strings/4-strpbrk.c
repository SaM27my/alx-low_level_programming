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
	char *scanp;
	int c, sc;

	while ((c = *s++) != '\0')
	{
		for (scanp = accept; (sc = *scanp) != '\0';)
		{
			if (sc == c)
				return ((char *)(s - 1));
		}
	}
	return ('\0');
}
