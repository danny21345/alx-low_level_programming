#include "main.h"

/**
* _abs - finds an absolute  value of a number
* @n: interger used
*
* This program computes an absolute value
*
* Return: returns absolute val
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
