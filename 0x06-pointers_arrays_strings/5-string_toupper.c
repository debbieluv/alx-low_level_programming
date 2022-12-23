#include "main.h"

/**
 * string_toupper - function
 * @s: char
 * Return: string
 */

char *string_toupper(char *s)
{

	int x = 0;

	while (s[x++])
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
	}

	return (s);
}
