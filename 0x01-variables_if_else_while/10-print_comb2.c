#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int two, one;

	for (two = '0'; two <= '9'; two++)
		for (one = '0'; one <= '9'; one++)
		{
			putchar(two);
			putchar(one);
			if (two != '9' || one != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
