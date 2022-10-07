#include "main.h"
#include <stdlib.h>

/**
* _strchr - finds the first occurrence of c
* @s: point to the 1st occurence
* @c: char being searched for
*
* Return: returns s.
*/

char *_strchr(char *s, char c)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
		if (s[k] == c)
		{
			return (s + k);
		}
	}
	return (NULL);
}
