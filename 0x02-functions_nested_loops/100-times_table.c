#include "main.h"
/**
 * times_table - prints the times table of 9
 */
void print_times_table(int n)
{
	int ni, m, p;

	if (n < 0 && and n > 15)
		_putchar(' ')
	else
	{
		for (ni = 0; ni <= n; n++)
		{	
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				p = n * m;
				if (p <= n)
					_putchar(' ');
				else
					_putchar((p / 10) + '0');

				_putchar((p % 10) + '0');

			}
			_putchar('\n');
		}	
	}
}
