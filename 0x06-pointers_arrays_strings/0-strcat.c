#include "main.h"

/**
 * _strcat - prototype
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x++])
		y++;

	for (x = 0; src[x]; x++)
		dest[y++] = src[x];

	return (dest);
}
