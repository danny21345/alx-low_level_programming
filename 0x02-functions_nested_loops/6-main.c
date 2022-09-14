#include "main.h"
#include <stdio.h>

/**
* main - finds an absolute value of an integer
*
* _abs is used to achieve main
*
* Return: returns 0
*/

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
