#include "main.h"
/**
* _memset - fills memory with constant byte
*
* @s: destination
* @b: value
* @n: length of memory
* Description: a function like memset.c
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	*p++ = b;

	return (s);
}
