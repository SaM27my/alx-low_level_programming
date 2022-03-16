#include <unistd.h>
/**
*  _putchar - writes the character c to std out 
* @c- the character to print
*
* Return: on success 1
* on error -1, and error is set apropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
