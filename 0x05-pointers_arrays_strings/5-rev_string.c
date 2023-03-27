#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: input value1.
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char a;

	while (*(s + i) != 0)
	{
		i++;
	}
	i--;
	while (i >= j)
	{
		a = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = a;
		i--;
		j++;
	}
}
