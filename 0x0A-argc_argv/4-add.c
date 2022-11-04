#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds infinite number of arguements
 * @argc: number of arguements
 * @argv: an array that holds the arguements
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int result = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

