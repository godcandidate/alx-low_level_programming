#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
	return (0);

}
