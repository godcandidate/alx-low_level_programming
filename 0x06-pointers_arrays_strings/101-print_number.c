#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int x, y, i;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	i = 1;

	while (y > 9)
	{
		y /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((x / i) % 10) + 48);
	}
}
