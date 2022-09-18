#include "main.h"

/**
* _isupper - checks whether a letter is capital
* @c: The argument which will be tested
*
* We will check whether char is capital or not
*
* Return: return 1 on success & 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (0);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
