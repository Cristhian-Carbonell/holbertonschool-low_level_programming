#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long a, b;

	a = 1;
	b = 2;
	for (i = 0; i < 49; i++)
	{
		unsigned long tmp;

		if (i == 0)
			printf("%lu, %lu", a, b);
		else
		{
			tmp = a;
			a = b;
			b = tmp + a;
			printf("%lu", b);
		}
		if (i != 48)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
