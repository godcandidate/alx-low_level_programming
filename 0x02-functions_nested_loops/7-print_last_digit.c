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
	int k;

	if (i < 0)
		i = i * -1;
	if (i != 0)
	{
		k = i;
		i = (i * 10);
		i = i + k;
		_putchar(i);
	}
	else
		_putchar(i + '0');
	return (0);
}
