#include "main.h"

/**
* _memcpy - fnc copies n bytes from mry
* @dest: where to copy to
* @src: where to copy from
* @n: number of bytes
*
* Return: returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;

	while (n > b)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	return (dest);
}
