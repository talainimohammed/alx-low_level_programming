#include "main.h"

/**
 * _isalpha - find alphabetic character
 *
 * @c: the charactere to check
 *
 * Return: 1 if true.
 **/
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
