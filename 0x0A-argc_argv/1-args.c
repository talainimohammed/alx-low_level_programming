#include <stdio.h>

/**
 * main - print the nb of arguments 
 * @argc: nb arguments
 * @argv: Array Arguments
 * Return: 0 value
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
