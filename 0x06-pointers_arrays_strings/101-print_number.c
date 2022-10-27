#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int i, m, o;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
		m = n;

	o = m;
	i = 1;

	while (o > 9)
	{
		o /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
		_putchar(((m / i) % 10) + 48);
}
