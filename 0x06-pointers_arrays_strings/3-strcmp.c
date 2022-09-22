#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string argument
* @s2: second string argument
*
* Return: returns 0 if they are same
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
