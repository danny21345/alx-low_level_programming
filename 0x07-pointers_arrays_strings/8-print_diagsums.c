#include <stdio.h>

/**
* print_diagsums - prints the sum of the 2 matrix
* @a: array
* @size: the size of the array in question
*
*/

void print_diagsums(int *a, int size)
{
	int b = 0, value = 0, sum1 = 0, sum2 = 0, number;

	number = size * size;

	while (b < number)
	{
		value = a[b];
		sum1 = sum1 + value;
		b = b + size + 1;
	}
	b = size - 1;
	while (b < (number - 1))
	{
		value = a[b];
		sum2 = sum2 + value;
		b = b + (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
