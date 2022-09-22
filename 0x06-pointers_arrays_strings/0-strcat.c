#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: arg to be appended by source string
* @src: arg to be appended to destination string
*
* Return: destination pointer
*/

char *_strcat(char *dest, char *src)
{
	int d = 0, f;

	while (dest[d])
	{
		d++;
	}
	for (f = 0; src[f] != 0; f++)
	{
		dest[d] = src[f];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
