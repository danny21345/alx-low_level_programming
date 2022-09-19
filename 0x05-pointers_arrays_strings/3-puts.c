#include "main.h"

/**
* _puts - prints given string to stdout
* @str: string to be printed
*
* Return: void
*/

void _puts(char *str)
{
	int j = 0;

	while (str[j] != 0)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
