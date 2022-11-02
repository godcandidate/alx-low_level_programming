#include "main.h"
/**
 * _sqrt - iterates from i to no
 * @n: square number
 * @i: number of iterates
 *
 * Return: returns natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion -  compute natural square root of a number
 * @n: number
 *
 * Return: returns square root of number
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
