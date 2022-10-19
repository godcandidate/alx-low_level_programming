#include <stdio.h>
void print_sum_multiples(void);

/**
 * print_sum_multiples - prints the sum of 3 and 5 times 1024
 */
void print_sum_multiples(void)
{
	int i = 3, a = 5;
	int sum_3 = 0, sum_5 = 0;

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

/**
 * main - prints the sum
 *
 * Return: Always 0.
 */
int main(void)
{
	print_sum_multiples();
	return (0);
}
