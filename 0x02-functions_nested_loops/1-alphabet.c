#include <unistd.h>
#include "main.h"

/**
* print_alphabet - prints in small letters
*
* _putchar is used in above
*
* Return: returns 1 on success
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
