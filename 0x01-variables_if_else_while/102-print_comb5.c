#include <stdio.h>

/**
 * main -prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;
	int num1, num2;

	for (num1 = 0; num1 < 99; num1++)
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			a = num1 / 10;
			b = num1 % 10;
			c = num2 / 10;
			d = num2 % 10;

			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');

			if (num1 == 98 && num2 == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
