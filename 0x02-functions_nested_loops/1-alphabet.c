/**
* main - check the code
*
* Description: print the alphabet in lower case
* Return: Always 0
*/
int main(void)
{
	print_alphabet();
	return (0);

}

void print_alphabet(void)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}
		_putchar('\n');
	}
