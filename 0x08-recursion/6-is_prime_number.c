#include "holberton.h"

/**
 * primo_noPrimo - auxiliary function
 * @n: integer
 * @y: integer
 *
 * Return: 1 is prime, 0 not
 */
int primo_noPrimo(int n, int y)
{
	if (n == y)
	{
		return (1);
	}
	if (n % y == 0)
	{
		return (0);
	}
	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (primo_noPrimo(n, y + 1));
}

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: integer
 *
 * Return: 1 if the input iteger is a prime number, 0 not
 */
int is_prime_number(int n)
{
	return (primo_noPrimo(n, 2));
}
