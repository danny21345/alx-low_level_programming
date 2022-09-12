#include <stdio.h>

/**
* main - print alphabet except e and q
*
* Putchar is used to achieve main
*
* Return: returns 0
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
		}
		else
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
