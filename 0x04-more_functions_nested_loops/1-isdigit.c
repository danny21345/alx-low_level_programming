#include "main.h"

/**
* _isdigit - checks whether char is digit
* @c: char to be tested
*
* We use loops to achieve this
*
* Return: return 1 if true & 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '0'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
