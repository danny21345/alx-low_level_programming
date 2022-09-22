#include <stdio.h>

/**
* main - prints the combination of two numbers
*
* Return: return 0
*/

int main(void)
{
	int f = '0';
	int g = '1';

	while (f <= '8')
	{
		while (g <= '9')
		{
			putchar(f);
			putchar(g);

			if (g != '9')
			{
				 putchar(',');
				 putchar(' ');
			}
			g++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
