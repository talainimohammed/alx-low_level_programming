#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: examined value
 * @needle: value searched in hystack
 * Return: return 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		/*star WHILE*/
		while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}
