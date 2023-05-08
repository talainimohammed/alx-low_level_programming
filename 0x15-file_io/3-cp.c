#include "main.h"
#include <stdio.h>

/**
 * error_file - Function to checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main to copie files.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_f, f_t, err_close;
	ssize_t nbchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_f = open(argv[1], O_RDONLY);
	f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(f_f, f_t, argv);

	nbchars = 1024;
	while (nbchars == 1024)
	{
		nbchars = read(file_from, buf, 1024);
		if (nbchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nbchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(f_f);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		exit(100);
	}

	err_close = close(f_t);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		exit(100);
	}
	return (0);
}
