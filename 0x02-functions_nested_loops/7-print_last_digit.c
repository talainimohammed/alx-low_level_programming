#include "main.h"

/**
 * print_last_digit - get last digit of number
 *
 * @n: the number to check
 *
 * Return: value of digit.
 **/
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = -n;
	j = n % 10;
	_putchar (j + '0');
	return (j);
}
