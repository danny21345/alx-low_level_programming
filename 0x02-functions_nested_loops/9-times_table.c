#include "main.h"

/**
* times_table - prints 9 time tables
*
* using while loops (nested)
*
* Return: return 1 on success
*/

void times_table(void)
{
	int col, row, sum, m;

	col = 0;
	while (col < 10)
	{
		_putchar('0');
		row = 1;
		while (row < 10)
		{
			_putchar(',');
			_putchar(' ');
			sum = col * row, m = sum / 10;
			if (sum < 10)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar(m + '0');
				_putchar(sum % 10 + '0');
			}
			row++;
		}
		_putchar('\n');
		col++;
	}
}
