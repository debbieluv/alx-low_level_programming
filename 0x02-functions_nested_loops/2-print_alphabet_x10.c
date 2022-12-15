#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - func
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char counter;

	for (counter = 0; counter < 10; counter++)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
