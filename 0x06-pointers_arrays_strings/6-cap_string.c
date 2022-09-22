#include "main.h"

/**
* cap_string - Capitilizes all words of a string
* @c: String to be worked on
*
* Return: return c
*/

char *cap_string(char *c)
{
	int j = 0;

	while (c[j] != '\0')
	{
		if ((c[j] == '' || c[i - 1] == '\n'
		|| c[j - 1] == '\t' || c[j - 1] == ','
		|| c[j - 1] == ';' || c[j - 1] == '!'
		|| c[j - 1] == '?' || c[j - 1] == '"'
		|| c[j - 1] == '(' || c[j - 1] == ')'
		|| c[j - 1] == '{' || c[j - 1] == '}'
		|| c[j - 1] == '.')
		&& (c[j] >= 'a' && c[j] <= 'z'))
		{
			c[j] = c[j] - 32;
		}
		else if ((c[0] >= 97 && c[0] <= 122))
		{
			c[0] = c[0] - 32;
		}
		else
		{
			c[j] = c[j];
		}
		j++;
	}
	return (c);
}
