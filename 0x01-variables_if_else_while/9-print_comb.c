#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 */

int main(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		putchar(nums);
		if (nums == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
