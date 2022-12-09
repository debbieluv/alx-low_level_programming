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
		putchar(nums);
	putchar('\n');
	return (0);
}
