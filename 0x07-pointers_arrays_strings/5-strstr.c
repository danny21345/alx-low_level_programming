#include "main.h"

/**
* _strstr - finds the first occurence of substring
* @haystack: string to be located
* @needle: substring to be located
*
* Return: return haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int a = 0;

	while (haystack[a] != '\0')
	{
		while (needle[a] == haystack[a] && needle[a] != '\0' && haystack[a] != '\0')
		{
			a++;
		}
		if (needle[a] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
