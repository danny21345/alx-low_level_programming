#include "main.h"

/**
* more_numbers - print 14 #s 10 times
*
* Return: return 1 on successs
*/

void more_numbers(void)
{
	int j, k;

	j = 0;
	while (j < 10)
	{
		k = 0;
		while (k < 15)
		{
			if (k > 9)
			{
				_putchar('1');
			}
			_putchar((k % 10) + '0');
			k++;
		}
		_putchar('\n');
		j++;
	}
}
