#include <stdio.h>

/**
* main - prints all hexadecimal values
*
* Putchar is used to achieve main
*
* Return: returns 0
*/

int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
