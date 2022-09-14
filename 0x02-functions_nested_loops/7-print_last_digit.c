#include "main.h"

/**
* print_last_digit - prints the last digit of a #
* @n: integer used
*
* Mod is used to achieve this
*
* Return: return last digit
*/

int print_last_digit(int n)
{
	int k;

	k = n % 10;

	if (k < 0)
	{
		k = -k;
		_putchar('0' + k);
	}
	else
	{
		_putchar('0' + k);
	}

	return (k);
}
