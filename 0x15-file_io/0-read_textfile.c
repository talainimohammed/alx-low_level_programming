#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: filename.
 * @letters: size of letters printed.
 *
 * Return: nb of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nread, nwrite;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nread = read(f, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(f);

	free(buf);

	return (nwrite);
}
