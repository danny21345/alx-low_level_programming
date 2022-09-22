#include "main.h"

/**
* _strncat - Concatenates 2 strings
* @dest: string to be concatenated to
* @src: string to be concatenated by
* @n: number of bytes
*
* Return: Destination pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int d;
	int f;

	d = 0;
	f = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while ((f < n) && src[f])
	{
		dest[d] = src[f];
		d++;
		f++;
	}
	dest[d + n + 1] = '\0';
	return (dest);
}
