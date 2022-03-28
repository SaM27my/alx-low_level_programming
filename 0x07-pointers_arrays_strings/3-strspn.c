#include "main.h"
/**
* _strspn - returns the number of bytes in the initial segment
*
* @s: for the count of characters
* @accept: string pointer to cmpr
* Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i, j, k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		if (k == 0)
		break;

		num++;
		i++;
	}
	return (num);
}
