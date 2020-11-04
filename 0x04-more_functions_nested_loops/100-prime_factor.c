#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned int i;

	for (i = 2; i < n; i++)
		while (n % i == 0)
			n /= i;
	printf("%lu\n", n);
	return (0);
}
