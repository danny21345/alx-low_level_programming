#include <stdio.h>

/**
* main - prints the combination of two numbers
*
* Return: return 0
*/

int main(void)
{
	int f = 48;
	int g = 49;

	while (f <= 56)
	{
		while (g <= 57)
		{
			putchar(f);
			putchar(g);
			if ((f != 57) || (g != 57))
			{
				putchar(',');
				putchar(' ');
			}
			g++;
		}
		g = 48;
		f++;
	}
	putchar('\n');
	return (0);
}
