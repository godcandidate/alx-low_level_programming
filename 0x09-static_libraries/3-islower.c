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
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
