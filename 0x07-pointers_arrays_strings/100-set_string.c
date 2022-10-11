#include "main.h"

/**
* set_string - value of a pointer is set to char.
* @s: pointer to be set
* @to: where to set that pointer
*
*/

void set_string(char **s, char *to)
{
	*s = to;
}
