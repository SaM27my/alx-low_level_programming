#include "main.h"
/**
* _memcpy - copies memory area
*
* @dest: destination
* @src: source
* @n: length of memory
* Description: a function like memset.c
* Return: s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	*d++ = *s++;

	return (dest);
}
