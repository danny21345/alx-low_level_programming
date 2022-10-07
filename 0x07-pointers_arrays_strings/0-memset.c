#include "main.h"

/**
* _memset - fnc fills the 1st n bytes of mry
* @s: memory
* @b: the constant byte
* @n: bytes
*
* Return: return pointer to the memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < n)
	{
		s[k] = b;
		k++;
	}

	return (s);
}
