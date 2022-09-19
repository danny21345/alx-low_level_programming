#include "main.h"

/**
* _strlen - tells a length of a string
* @s: argument to be checked
*
* Return: length of string
*/

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != 0)
	{
		j++;
	}
	return (j);
}
