#include "main.h"
/**
 *  print_triangle - draws a square
 *  @size: the size of the square
 *
 *  Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
