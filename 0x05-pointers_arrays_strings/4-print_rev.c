#include "main.h"

/**
* print_rev - reverse
*
* @s: string
*/

void print_rev(char *s)
{
int len = 0;
int point = 0;

len = _strlen(s);

for (point = len - 1; point >= 0; point--)
_putchar(s[point]);

_putchar('\n');
}

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
int i;
int len = 0;

for (i = 0; s[i] != '\0' ; i++)
{
len++;
}
return (len);
}
