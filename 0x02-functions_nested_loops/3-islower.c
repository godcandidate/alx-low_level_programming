#include "main.h"
#include <ctype.h>
/**
 *  _islower - checks if a letter is lowercase
 *  @c: The character to check
 *
 *  Return: 1 if the letter is lower case. O otherwise
 */
int _islower(int c)
{
	int i;

	if (islower(c))
		i = 1;
	else
		i = 0;
	return (i);
}
