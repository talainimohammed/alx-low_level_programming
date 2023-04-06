#include <stdio.h>

/**
 * main - print arguments
 * @argc: nb arguments
 * @argv: array argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
