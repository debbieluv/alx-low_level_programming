#include "main.h"

/**
* _strcmp - main
* @s1: string 1
* @s2: string 2
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		res = *s1 - *s2;

	return (res);
}
