#include "main.h"

/**
* rev_string - reverses given string
* @s: is a given
*
* Return: void
*/

void rev_string(char *s)
{
	int j = 0;
	int k = 0;
	int t;

	while (s[j] != 0)
	{
		j++;
	}
	j = j - 1;

	while (k <= j)
	{
		t = s[k];
		s[k] = s[j];
		s[j] = t;
		j--;
		k++;
	}
}
