#include <stdio.h>
/**
 * main - prints all the arguemenrs of the program
 * @argc: number of arguements
 * @argv: an array that holds the arguements
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
