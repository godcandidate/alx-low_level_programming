#include "main.h"
#include <ctype.h>
/**
 *  _isalpha - checks if a character is alphabetic
 *  @c: The character to check
 *
 *  Return: 1 if the character is alphabetic. O otherwise
 */
int _isalpha(int c)
{
	int i;

	if (isalpha(c))
		i = 1;
	else
		i = 0;
	return (i);
}
