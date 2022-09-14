#include "main.h"

/**
* _isalpha - checks whether letter is capital
* @o: The character which will be used
*
* We check whether character is capital
*
* Return: returns 1 on success
*/

int _isalpha(int o)
{
	if ((o >= 'a') && (o <= 'z'))
	{
		return (1);
	}
	else if ((o >= 'A') && (o <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
