#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 *Return: returns nothing
 */
void times_table(void)
{
	int digit;
	int fctr;
	int num;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');

		for (fctr = 1; fctr <= 9; fctr++)
		{
			_putchar(',');
			_putchar(' ');
			num = digit * fctr;
			if (num <= 9)
				_putchar(' ');
			else
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
