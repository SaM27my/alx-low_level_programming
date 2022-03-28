#include "main.h"
/**
* _strchr - searches for a character in a string
*
* @s: string
* @c: character to search
* Return: 0
*/
char *_strchr(char *s, char c)
{
	do {

	if (*s == c)
		return (s);
	} while (*s++);

	return (0);
}
