#include <stdio.h>

/**
* main - prints alphabet in lower cases
*
* We use putchar to print letters
*
* Return: returns 0
*
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
