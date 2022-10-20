#include <stdio.h>
void largest_prime_factor(void);

/**
 * largest_prime_factor - prints largest prime factor
 */
void largest_prime_factor(void)
{
	long int div = 2, maxFact;
	long int n = 612852475143;

	while (n != 0)
	{
		if (n % div != 0)
			div += 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
}

/**
 * main - prints the highest factor
 *
 * Return: Always 0.
 */
int main(void)
{
	largest_prime_factor();
	return (0);
}
