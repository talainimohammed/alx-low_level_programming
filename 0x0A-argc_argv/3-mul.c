#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply of two int
 * @argc: number of argument
 * @argv: Array argument
 * Return: 0 if it ok, 1 if there ERROR
 */

int main(int argc, char **argv)
{
	int i, j, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	diff = i * j;
	printf("%i\n", diff);
	return (0);
}
