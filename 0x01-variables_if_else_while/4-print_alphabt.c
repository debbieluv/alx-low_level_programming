#include <stdio.h>

/**
 * main - alphabt
 *
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'q' && al != 'e')
			putchar(al);
	}
	putchar('\n');
	return (0);
}
