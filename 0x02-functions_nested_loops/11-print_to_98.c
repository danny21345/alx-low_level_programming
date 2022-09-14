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
			printf("%d", k);
			if (k != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (k = n; k >= 98; k--)
		{
			printf("%d", k);
			if (k != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
