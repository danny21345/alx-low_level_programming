#include "main.h"

/**
* *_strcpy - copies 1 string into another
* @dest: Where to copy to
* @src: Where to copy from
*
* Return: Copied string
*/

char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (src[k] != 0)
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
