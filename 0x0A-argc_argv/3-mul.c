#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply of two ints
 * @argc: argument number
 * @argv: argument array
 * Return: 0 if it ok, 1 if  ERROR
 */

int main(int argc, char **argv)
{
	int diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	diff = argv[1] * argv[2];
	printf("%i\n", diff);
	return (0);
}
