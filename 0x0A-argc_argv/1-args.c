#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: number of arguements
 * @argv: an array that holds the arguements
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	*argv = "";
	printf("%d\n", argc - 1);

	return (0);
}
