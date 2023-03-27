#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: input value1.
 * @b: input value2.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
