#include "main.h"

/**
 * _isdigit - find digit character
 *
 * @c: the charactere to check
 *
 * Return: 1 if true.
 **/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
