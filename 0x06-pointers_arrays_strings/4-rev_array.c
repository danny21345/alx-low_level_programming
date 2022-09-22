#include "main.h"

/**
* reverse_array - prints array in reverse
* @a: pointer to array
* @n: size of the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int j, k;

	j = 0;
	n = n - 1;
	while (j <= n)
	{
		k = a[j];
		a[j] = a[n];
		a[n] = k;
		j++;
		n--;
	}
}
