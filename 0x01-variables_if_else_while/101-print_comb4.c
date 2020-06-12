#include <stdio.h>

/**
 * main -prints all possible different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int n, m, c;

	for (n = '0'; n <= '7'; a++)
		for (m = n + 1; m <= '8'; m++)
			for (c = m + 1; c <= '9'; c++)
			{
				if (n != m && n != c && m != c)
				{
					putchar(n);
					putchar(m);
					putchar(c);
					if (n != '7' || m != '8' || c != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
