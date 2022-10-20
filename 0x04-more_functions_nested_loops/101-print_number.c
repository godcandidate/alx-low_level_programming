#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int a5, a6, a7, a8, a9;
	int s5, s6, s7, s8;

	a5 = (n / 10000) % 10;
	s5 = a5;
	a6 = (n / 1000) % 10;
	s6 = s5 + a6;
	a7 = (n / 100) % 10;
	s7 = s6 + a7;
	a8 = (n / 10) % 10;
	s8 = s7 + a8;
	a9 = n % 10;
	if (n < 0)
	{
		_putchar('-');
		a5 *= -1;
		a6 *= -1;
		a7 *= -1;
		a8 *= -1;
		a9 *= -1;
	}
	if (s5 != 0)
		_putchar('0' + a5);
	if (s6 != 0)
		_putchar('0' + a6);
	if (s7 != 0)
		_putchar('0' + a7);
	if (s8 != 0)
		_putchar('0' + a8);
	_putchar('0' + a9);
}
