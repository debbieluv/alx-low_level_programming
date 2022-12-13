#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0
 */

int main(void)
{
	char chars[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(chars[i]);
	}
	_putchar(10);

	return (0);
}
