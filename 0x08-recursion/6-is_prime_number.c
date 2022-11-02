#include "main.h"
/**
 * primeb- checks the number of factors
 * @x: number
 * @y: factors
 * Return: returns results
 */
int prime(int x, int y)
{
	if (x == y)
	return (1);
	else if (x % y == 0)
		return (0);
	return (prime(x, y + 1));
}

/**
 * is_prime_number -  compute prime numbers
 * @n: number
 *
 * Return: returns 1 if it prime. 0 otherwise
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
