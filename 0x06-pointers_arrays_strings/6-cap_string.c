#include "main.h"
/**
 * cap_string - capitalize after separator words
 * @s: character to capitalize after separator
 * Return: return value of upper
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' || s[i] == '!' ||
			 s[i] == '?' || s[i] == '"' || s[i] == '(' ||
			 s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
