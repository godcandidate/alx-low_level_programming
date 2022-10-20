#include "main.h"
/**
 *  print_diagonal - draws a diagonal line
 *  @n: number if times to print \
 *
 *  Return: no return
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('\\');
			_putchar('\n');
	}
	else
		_putchar('\n');
}
