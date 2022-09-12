#include <stdio.h>

/**
* main - prints number between 0 and 10
*
* Putchar is used in main
*
* Return: returns 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
