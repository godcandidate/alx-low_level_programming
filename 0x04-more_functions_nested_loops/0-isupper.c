#include "main.h"
#include <ctype.h>
/**
 *  _isupper - checks if a letter is uppercase
 *  @c: The character to check
 *
 *  Return: 1 if the letter is lower case. O otherwise
 */
int _isupper(int c)
{
	int i;

	if (isupper(c))
		i = 1;
	else
		i = 0;
	return (i);
}
