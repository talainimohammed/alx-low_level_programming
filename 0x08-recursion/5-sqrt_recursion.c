#include "main.h"

/**
 * _sqrt_recursion -  sqrt
 * @n: integer
 * Return: Calculated Value
 */

int _sqrt_recursion(int n)
{
	int j;

    if (n < 0)
        return (-1);
    else if (n == 0 || n == 1)
        return (n);
    else
    {
        j = 1;
        while (j * j <= n)
        {
            if (j * j == n)
                return (j);
            j++;
        }
        return (-1);
    }
}
