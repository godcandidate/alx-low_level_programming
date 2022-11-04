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
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
