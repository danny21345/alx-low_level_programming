#include <unistd.h>

/**
* _putchar - writes c to stdout
* @c: parameter to be writen on stdout
*
* Return: On success 1.
*
* On error, -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
