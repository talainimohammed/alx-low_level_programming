#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: input value1.
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char a = '';

	while (*(s + i) != 0)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		a += *(s + i);
		i--;
	}
	*s = a;
	_putchar ('\n');
}
