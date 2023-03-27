#include "main.h"

/**
 * _puts2 - check the code
 *
 * @str: input value1.
 *
 */
void _puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar ('\n');
}
