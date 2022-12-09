#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 */

int main(void)
{
	char nums;

	for (nums = 'z'; nums >= 'a'; nums--)
		putchar(nums);
	putchar('\n');
	return (0);
}
