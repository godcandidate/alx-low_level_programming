#include <stdio.h>
void fizzbuzz(void);

/**
 * fizzbuzz - uses fizzbuzz
 */
void fizzbuzz(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
		i += 1;
	}
	printf("\n");
}

/**
 * main - prints the sum
 *
 * Return: Always 0.
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
