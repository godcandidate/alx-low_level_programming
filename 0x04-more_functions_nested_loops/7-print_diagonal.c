#include "main.h"
/**
 *  print_diagonal - draws a diagonal line
 *  @n: number if times to print \
 *
 *  Return: no return
 */
void print_diagonal(int n)
{
	int i, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (k = 0; k < i; k++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
