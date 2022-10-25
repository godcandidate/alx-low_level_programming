#include "main.h"
#include <ctype.h>
/**
 *  swap_int - resets a number to 98
 *  @a: first numbert
 *  @b: second number
 *  Return: always 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
