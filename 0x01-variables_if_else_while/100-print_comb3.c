#include <stdio.h>

/**
* main - prints the combination of two numbers
*
* Return: return 0
*/

int main(void)
{
	int f = 48;
	int g = 48;

	while (f <= 57)
	{
		while (g <= 57)
		{
			putchar(f);
			putchar(g);
			if ((f != 57) || (g != 28))
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
