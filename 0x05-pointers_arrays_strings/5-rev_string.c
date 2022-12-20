#include "main.h"
/**
*rev_string - Reverse a string
*@s: String
*Return: 0
*/
void rev_string(char *s)
{
int i = 0
int length;

length = _strlen(s) - 1;

while (length > i)
{
_swap(s + length, s + i);
i++;
length--;
}
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
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

/**
*_swap - swap two characters
*@a: first character
*@b: second character
*Return: 0
*/

void _swap(char *a, char *b)
{
char temp = *a;
*a = *b;
*b = temp;
}

