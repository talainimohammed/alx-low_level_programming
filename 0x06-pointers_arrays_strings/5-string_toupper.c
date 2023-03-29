#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @s: the char
 * Return: the converted char
 **/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += 'A' - 'a';
		}
		i++;
	}
	return (s);
}
