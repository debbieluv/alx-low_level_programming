#include<stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
