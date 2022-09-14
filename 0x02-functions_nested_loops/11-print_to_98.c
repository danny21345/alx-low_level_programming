#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print numbers to 98
* @n: starting natural number
*
* determine whether a num is <, >, | 98
*
* Return: return natural number
*/

void print_to_98(int n)
{
	int k;

	if (n < 98)
	{
		for (k = n; k <= 98; k++)
		{
			printf("%d, ", k);
		}
	}
	else
	{
		for (k = n; k >= 98; k--)
		{
			printf("%d, ", k);
		}
	}

	printf("\n");
}
