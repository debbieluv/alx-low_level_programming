#include "main.h"

/**
 * print_sign - n
 *@n: character
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	} else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
}
