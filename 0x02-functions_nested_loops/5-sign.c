#include "main.h"

/**
* print_sign - tells whether # is + or -
* @n: number being tested
*
* loops will be used
*
* Return: returns 0,1,-1 depending on # tested
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
