#include "main.h"

/**
* print_chessboard - function to print chessboard
* @a: number of lines
*
*/

void print_chessboard(char (*a)[8])
{
	int v = 0;
	int b;

	while (v < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[v][b]);
			b++;
		}
		_putchar('\n');
		v++;
	}
}
