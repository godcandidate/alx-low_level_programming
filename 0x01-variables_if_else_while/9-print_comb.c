/* more headers goes there */
#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 separated by ', '
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int n;

	for (n = 0; n <= 9 ; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);

}
