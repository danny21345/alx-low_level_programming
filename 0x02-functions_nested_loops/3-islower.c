#include "main.h"

/**
* _islower - used to check lowercase letter
*
* Checks whether letter is capital or not
*
* Return: returns 1 on success
*/

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
