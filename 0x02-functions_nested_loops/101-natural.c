#include <stdio.h>
void print_sum_multiples(void);

/**
 * print_sum_multiples - prints the sum of 3 and 5 times 1024
 */
void print_sum_multiples(void)
{
	int i = 2;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum += i;
		i += 1;
	}
	printf("%d\n", sum);
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
