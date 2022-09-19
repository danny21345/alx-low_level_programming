#include <stdio.h>

/**
* main - printing the address of a pointer
*
* Return: Always 0.
*/

int main(void)
{
	int *p;
	int n;

	n = 98;
	p = &n;

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	return (0);
}
