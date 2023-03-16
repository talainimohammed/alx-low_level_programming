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
        
	fprintf(stderr,"Size of char: %zu byte(s)\n", sizeof(charType));
        fprintf(stderr,"Size of int: %zu byte(s)\n", sizeof(intType));
        fprintf(stderr,"Size of long int: %zu byte(s)\n", sizeof(longType));
        fprintf(stderr,"Size of long long int: %zu byte(s)\n", sizeof(longlongType));
        fprintf(stderr,"Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}



