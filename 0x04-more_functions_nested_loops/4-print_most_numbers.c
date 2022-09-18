#include "main.h"

/**
* print_most_numbers - print all #s except 2 & 4
*
* Return: returns 1 on success
*/

void print_most_numbers(void)
{
	char k;

	k = '0';
	while (k <= '9')
	{
		if ((k == '2') || (k == '4'))
		{

		}
		else
		{
			_putchar(k);
		}
		k++;
	}
	_putchar('\n');
}
