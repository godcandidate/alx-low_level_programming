#include "main.h"

/**
 * _strlen_recursion -  prints the length of a string
 * @s: string to check
 *
 * Return: returns length of string
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
