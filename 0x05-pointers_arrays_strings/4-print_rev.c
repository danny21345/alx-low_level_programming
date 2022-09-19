#include "main.h"

/**
* print_rev - prints given string in reverse
* @s: string to be tested
*
* Return: void
*/

void print_rev(char *s)
{
	int j = 0;
	int k;

	while (s[j] != 0)
	{
		j++;
	}
	j = j - 1;
	for (k = j; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
