#include "main.h"

/**
* puts2 - prints at multiples of 2
* @str: string be printed
*
* Return: void
*/

void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != 0; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
