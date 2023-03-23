#include "main.h"

/**
 * _isupper - find upper character
 *
 * @c: the charactere to check
 *
 * Return: 1 if true.
 **/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
