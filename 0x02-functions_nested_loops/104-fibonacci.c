#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long a, b, tmp;

	a = 1;
	b = 2;
	printf("1, 2, ");
	for (i = 0; i < 97; i++)
	{
		tmp = a;
		a = b;
		b = tmp + a;
		printf("%lu", b);
		if (i != 96)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
