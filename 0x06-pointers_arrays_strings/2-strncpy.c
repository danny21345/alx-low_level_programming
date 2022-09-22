#include "main.h"

/**
* _strncpy - copies a string
* @dest: destionation pointer
* @src: source pointer
* @n: number of bytes
*
* Return: Destination pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (src[s])
	{
		s++;
	}
	while ((d < n) && src[d])
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}
