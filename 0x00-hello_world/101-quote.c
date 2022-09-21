#include <unistd.h>
#include <stdio.h>

/**
* main - prints given text to stdout
*
* Return: returns 1 on success
*/

int main(void)
{
	int s;

	s = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
