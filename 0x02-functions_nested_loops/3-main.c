#include "main.h"

/**
* main - Checks whether lettr big or small
*
* _islower is used in main
*
* Return: returns 1 on success and 0 otherwise
*/

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);

}
