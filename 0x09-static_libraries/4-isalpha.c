#include "main.h"
/**
 *  _isalpha - checks if a character is alphabetic
 *  @c: The character to check
 *
 *  Return: 1 if the character is alphabetic. O otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
