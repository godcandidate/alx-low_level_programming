#include "main.h"
/**
 *  _isdigit - checks if a character is a digit
 *  @c: The character to check
 *
 *  Return: 1 if the character is digit. O otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
