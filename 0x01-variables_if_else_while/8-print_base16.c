#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Prints the numerals of base 16
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	char n;

	for (n = '1'; n <= '9'; n++)
		putchar(n);
	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
	return (0);

}
