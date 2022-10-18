#include <stdio.h>
#include "main.h"
/**
 * print_sum_multiples - prints the sum of 3 and 5 times 1024
 */
void print_sum_multiples(void);
{
	int i = 3, a = 5;
	int sum_3, sum_5;

	while (i < 1024)
	{
		sum_3 += i;
		i += 3;
	}
	while (a < 1024)
	{
		sum_5 += a;
		a += 5;
	}
	printf("%d\n", sum_3 + sum_5);
}
