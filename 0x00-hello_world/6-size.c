#include <stdio.h>
/**
* main - prints sizes of difeerent data types
*
* Description: the  program prints the sizes of different data types
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c))
	printf("size of a int: %ld byte(s)\n", sizeof(i))
	printf("size of a long int: %ld byte(s)\n", sizeof(li)
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli))
	printf("size of a float: %ld byte(s)\n", sizeof(f))

	return (0);
}