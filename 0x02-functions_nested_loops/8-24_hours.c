#include "main.h"
/**
 * jack_bauer - prints the minutes of the day
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; i <= 23; hour++)
	{
		for (min = 0; n <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
