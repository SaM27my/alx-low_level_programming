#include "main.h"
/**
* print_chessboard - prints chess board
*
* @a: two dimentional 8x8 array
*
*
* Return: void
*
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
		_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
