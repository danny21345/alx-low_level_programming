#include "main.h"

/**
* string_toupper - changes lowercase to uppercase
* @c: string to be converted
*
* Return: return c
*/

char *string_toupper(char *c)
{
	int j = 0;

	while (c[j] != '\0')
	{
		if (c[j] >= 'a' && c[j] <= 'z')
		{
			c[j] = c[j] - 32;
		}
		j++;
	}
	return (c);
}
