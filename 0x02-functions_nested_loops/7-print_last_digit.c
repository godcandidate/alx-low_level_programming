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
	int i = n % 10, k;

	if (i < 0)
		i = i * -1;
	k = (i * 10) + i;
	return (k);
}
