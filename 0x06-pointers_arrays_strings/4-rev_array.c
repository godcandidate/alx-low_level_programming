#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: size of array
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int rev, i, j;

	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}

