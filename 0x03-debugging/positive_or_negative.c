#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* positive_or_negative - print where # is - | +
* @n: argument to be tested
*
* This achieved by testing whether its less than 0 or not
*
* Return: return 1 on success
*/

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
