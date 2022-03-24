#include "main.h"
/**
* leet - encodes string into 1337.
* @s: - character to be coded.
* Description: change a to 4 e to 3
* o to 0 t to 7 and l to 1
*
* Return: always s
*/
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == 'a' || s[i] == 'A')
		s[i] = '4';
	else if (s[i] == 'e' || s[i] == 'E')
		s[i] = '3';
	else if (s[i] == 'o' || s[i] == 'O')
		s[i] = '0';
	else if (s[i] == 't' || s[i] == 'T')
		s[i] = '7';
	else if (s[i] == 'l' || s[i] == 'L')
		s[i] = '1';
	else
		continue;

	}


	return (s);
}
