#include "main.h"

/**
* print_numbers - prints numbers between 0 & 9
*
* _putchar is used twice in our code
*
* Return: return 1 on success
*/

void print_numbers(void)
{
	char k;

	k = '0';
	while (k <= '9')
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');
}
