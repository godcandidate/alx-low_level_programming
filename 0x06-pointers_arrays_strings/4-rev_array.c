#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: size of array
 *
 * Return: always returns 0
 */
void reverse_array(int *a, int n)
{
	int *rev, i = 0;

	rev = a;

	while (n > -1)
	{
		a[i] = rev[n];
		i++;
		n--;
	}
}

