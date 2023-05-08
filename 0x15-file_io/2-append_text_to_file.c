#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename.
 * @text_content: content.
 *
 * Return: 1 if the file exists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nbletters;
	int w;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nbletters = 0; text_content[nbletters]; nbletters++)
			;

		w = write(f, text_content, nbletters);

		if (w == -1)
			return (-1);
	}

	close(f);

	return (1);
}

