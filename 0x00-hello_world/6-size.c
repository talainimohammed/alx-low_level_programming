#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
        float floatType;
        char charType;
	long int longType;
	long long int longlongType;
        
	fprintf("Size of char: %zu byte(s)\n", sizeof(charType));
        fprintf("Size of int: %zu byte(s)\n", sizeof(intType));
        fprintf("Size of long int: %zu byte(s)\n", sizeof(longType));
        fprintf("Size of long long int: %zu byte(s)\n", sizeof(longlongType));
        fprintf("Size of float: %zu byte(s)\n", sizeof(floatType));
	fprintf(stderr,"Anything")
	return (0);
}



