#include "main.h"
/**
* _strstr - locates substring
*
* @haystack: string to be searched from
* @needle: substring to search for
*
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	register char *a, *b;

	b = needle;
	if (*b == 0)
	{
	return (haystack);
	}
	for ( ; *haystack != 0; haystack += 1)
	{
		if (*needle != *b)
		{
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
			return (haystack);
			}
			if (*a++ != *b++)
			{
			break;
			}
		}
		b = needle;
	}
	return ('\0');
}
