#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst.";
	char str1[] = " Capitalize on what comes.\nhello world! hello-world";
	char str2[] = " 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	ptr = cap_string(str1);
	printf("%s", ptr);
	printf("%s", str1);
	ptr = cap_string(str2);
	printf("%s", ptr);
	printf("%s", str2);
	return (0);
}
