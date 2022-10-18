#include "main.h"
#include <ctype.h>
/**
 *  print_sign - checks if number is 0, less than or greater than
 *  @n: The number to check
 *
 *  Return: 1 if the number is greater than 0. O if number is 0. -1 otherwise
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
