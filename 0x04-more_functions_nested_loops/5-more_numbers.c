#include "main.h"
/**
 *  more_numbers - prints 10 times numbers from 0 to 14
 *
 *  Return: no return
 */
void more_numbers(void)
{
	int k = 0, i;

	while (k < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		k += 1;
	}
}
