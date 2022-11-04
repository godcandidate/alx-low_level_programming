#include "main.h"
#include <ctype.h>
/**
 *  _isdigit - checks if a character is a digit
 *  @c: The character to check
 *
 *  Return: 1 if the character is digit. O otherwise
 */
int _isdigit(int c)
{
	int i;

	if (isdigit(c))
		i = 1;
	else
		i = 0;
	return (i);
}
