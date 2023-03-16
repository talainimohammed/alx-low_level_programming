#include<stdio.h>
#include<stderr.h>

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
        
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
        printf("Size of int: %zu byte(s)\n", sizeof(intType));
        printf("Size of long int: %zu byte(s)\n", sizeof(longType));
        printf("Size of long long int: %zu byte(s)\n", sizeof(longlongType));
        printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}



