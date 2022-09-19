#include "main.h"

/**
* swap_int - swipes the values of 2 values
* @a: first value
* @b: second value
*
* Return: On success 1
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
