#include "main.h"
/**
 *  print_triangle - draws a square
 *  @size: the size of the square
 *
 *  Return: no return
 */
void print_triangle(int size)
{
	int sp, ro, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 0; ro < size; ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= ro; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
