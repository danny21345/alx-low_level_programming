#include "main.h"

/**
* print_alphabet_x10 - prints them x10
*
* while and for loops used in fnc
*
* Return: returns 1 on success
*/

void print_alphabet_x10(void)
{
	int c, n = 0;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		n++;
	}
}
