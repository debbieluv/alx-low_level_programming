#include<stdio.h>

/**
 * main - main
 *
 * * Return: 0 if success
 */

int main(void)
{
	char achar;
	int inte;
	long onelong;
	long long longlong;
	float floater;

	printf("Size of a char: %lu byte(s)\n", sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", sizeof(inte));
	printf("Size of a long int: %lu byte(s)\n", sizeof(onelong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(floater));
	return (0);
}
