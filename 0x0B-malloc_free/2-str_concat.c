#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 string
 * @s1: p to string
 * @s2: p to string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, size, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;

	size = l1 + l2;

	str = malloc((sizeof(char) * size) + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
