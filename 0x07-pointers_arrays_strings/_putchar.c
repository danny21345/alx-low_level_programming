#include <unistd.h>

/**
* _putchar - writes c to stdout
* @c: The character to be printed
*
* Return: return 1 on success and -1 otherwise
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
