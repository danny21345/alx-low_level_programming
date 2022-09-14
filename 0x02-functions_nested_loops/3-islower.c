#include "main.h"

/**
* _islower - used to check lowercase letter
* @o: character to be checked
*
* Checks whether letter is capital or not
*
* Return: returns 1 on success
*/

int _islower(int o)
{
	if ((o >= 'a') && (o <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
