#include "main.h"

/**
* puts_half - prints halve of a string
* @str: string to be printed
*
* Return: void
*/

void puts_half(char *str)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (str[j] != 0)
	{
		j++;
	}
	if (j % 2 != 0)
	{
		k = (j + 1) / 2;
	}
	else
	{
		k = j / 2;
	}

	while (str[k] != 0)
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
