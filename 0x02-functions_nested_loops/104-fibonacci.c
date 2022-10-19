#include <stdio.h>

void print_first_98_fibonacci(void);

/**
 * print_first_98_fibonacci - prints the first 50 fibonacci numbers
 */
void print_first_98_fibonacci(void)
{
	unsigned long int a, a1, a2, b, b1, b2, c, c1, c2, d, e;

	a = 1;
	b = 2;
	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (d = 3; d < 89; d++)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	c1 = c / 1000000000;
	c2 = c % 1000000000;
	for (e = 89; e < 98; e++)
	{
		printf("%lu%lu, ", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		c1 = a1 + b1 + ((a2 + b2) / 1000000000);
		c2 = (a2 + b2) % 1000000000;
	}
	printf("%lu%lu\n", c1, c2);
}

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always 0.
*/
int main(void)
{
	print_first_98_fibonacci();
	return (0);
}
