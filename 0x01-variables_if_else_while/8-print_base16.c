#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 */

int main(void)
{
	int nums;
	char al;

	for (nums = '0'; nums <= '9'; nums++)
	{
		putchar(nums);
		if (nums == '9')
		{
			for (al = 'a'; al <= 'f'; al++)
			{
				putchar(al);
			}
		}
	}
	putchar('\n');
	return (0);
}
