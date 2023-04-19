#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 *
 * Return: The Division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers.
 * @a: The 1 number.
 * @b: The 2 number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
