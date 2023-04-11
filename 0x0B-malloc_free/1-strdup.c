#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a ewly allocated
 * space in memory which contains a copy of the string
 * string given as a parameter.
 * @str: pointer to string to copy
 *
 * Return: NULL if str is NULL
 * pointer to string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *c;
	unsigned int l, i;

	if (str == NULL)
	{
		return (NULL);
	}

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}

	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		c[i] = str[i];
	}
	c[l] = '\0';
	return (c);
}
