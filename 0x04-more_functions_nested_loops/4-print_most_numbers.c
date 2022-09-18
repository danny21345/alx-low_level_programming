#include "main.h"

/**
* print_most_numbers - print all #s except 2 & 4
*
* Return: returns 1 on success
*/

void print_most_numbers(void)
{
	int k;

	k = 0;
	while (k <= 9)
	{
		if ((k == '2') || (k == '4'))
		{

		}
		else
		{
			_putchar(k + '0');
		}
		k++;
	}
	_putchar('\n');
}
