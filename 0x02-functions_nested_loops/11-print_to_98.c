#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n - starting point 
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(i);
		}
	}
	else
	{
		for (i=n; i >= 98; i--)
		{
			if (i > 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(i);
	return (0);
}
