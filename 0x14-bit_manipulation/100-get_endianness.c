#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 *  Return: 0 if big , 1 if little
 */
int get_endianness(void)
{
	unsigned int y;
	char *v;

	y = 1;
	v = (char *) &y;

	return ((int)*v);
}
