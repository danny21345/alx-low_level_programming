#include <stdio.h>

/**
 * main - print upper and lower alphabet
 *
 * Putchar is used to print in main
 *
 * Return: returns 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);

}
