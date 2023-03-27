#include "main.h"
#include<stdio.h>
/**
 * swap_int - check the code
 *
 * @s: input value1.
 * 
 * Return: lenght value;
 */
int _strlen(char *s)
{
    int c = 0;
    int i = 0;

    while (*s != '\0')
    {
        c++;
        s++;
    }
	return (c);
}
