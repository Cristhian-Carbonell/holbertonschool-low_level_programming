#include <stdio.h>

/**
 * main - print sum of even-valued fibonacci numbers under 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a, b, tmp, sum;

	for (a = 1, b = 2, sum = 2; a + b < 4000000; )
	{
		tmp = a;
		a = b;
		b = tmp + a;

		if (b % 2 == 0)
			sum += b;
	}
	printf("%lu\n", sum);
	return (0);
}
