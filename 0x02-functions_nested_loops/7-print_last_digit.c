#include "main.h"
#include<stdio.h>
/**
 *  print_last_digit - checks the last digit of a number
 *  @n: The number to check
 *
 *  Return: returns the last digit of the number
 */
int print_last_digit(int n)
{
	int i = n % 10;
	int k,b;

	if (i < 0)
		i = i * -1;
	if (i != 0)
	{
		k = i;
<<<<<<< HEAD
		i = (i * 10);
		i = i + k;
=======
		b = i * 10;
		i = k + b;
>>>>>>> b9ac78acb9be40c9551e9171dcaf8c701461efac
		_putchar(i);
	}
	else
		_putchar(i + '0');
	return (0);
}
