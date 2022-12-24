#include "main.h"

/**
 * leet - function
 * @d: char
 * Return: string
 */

char *leet(char *d)
{

	int x = 0;
	int y;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (d[++x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (d[x] == leet[y] ||
			 d[x] - 32 == leet[y])
				d[x] = y + '0';
		}
	}
	return (d);
}
