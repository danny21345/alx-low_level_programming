#include "main.h"
#include <stdio.h>

/**
* print_array - prints array of integers
* @a: the first parameter
* @b: second parameter
*
* Return: void
*/

void print_array(int *a, int n)
{
	int abr = 0;

	while (abr < n)
	{
		printf("%d", a[abr]);
		if (abr < (n - 1))
		{
			printf(", ");
		}
		else
		{

		}
		abr++;
	}
	printf("\n");
}
