#include <stdio.h>
#include <time.h>

/**
* main - generates random num
*
* This program tells porlarity
*
* Return: returns 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d", n, "is positive\n");
	}
	else if (n == 0)
	{
		printf("%d", n, "is zero\n");
	}
	else
	{
		printf("%d", n, "is negative\n");
	}

	return (0);
}
