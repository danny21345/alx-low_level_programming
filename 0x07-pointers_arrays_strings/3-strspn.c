#include "main.h"

/**
* _strspn - calculates the initial bytes of seg
* @s: the segment
* @accept: second segment
*
* Return: bytes of the first segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		if (c != a)
		{
			break;
		}
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = c + 1;
			}
			b++;
		}
		a++;
	}
	return (c);
}
