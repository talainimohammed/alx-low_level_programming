#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int c = 0, i;
	int lowers[] = {97, 101, 111, 116, 108};
	int uppers[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + c) == lowers[i] || *(s + c) == uppers[i])
			{
				*(s + c) = numbers[i];
				break;
			}
		}
		c++;
	}

	return (s);
}
