#include "main.h"
/**
 *  _abs - checks the absolute value of a number
 *  @c: The character to check
 *
 *  Return: returns the absolute value of the number
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
