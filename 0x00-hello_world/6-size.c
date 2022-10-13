#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: 'print size of data type'
 *
 *Return: Always 0 (Success)
 **/

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("size of a char: %zu bytes\n", sizeof(charType));
	printf("size of a int: %zu bytes\n", sizeof(intType));
	printf("size of a long int: %zu bytes\n", sizeof(longintType));
	printf("size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
