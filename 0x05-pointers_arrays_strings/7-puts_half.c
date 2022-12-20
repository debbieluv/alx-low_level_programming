#include "main.h"

/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/
void puts_half(char *str)
{
int len = _strlen(str);

if (len % 2 == 0)
len = len / 2;

else
len = (len + 1) / 2;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
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
