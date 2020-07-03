#include "holberton.h"

/**
 * calculate_raiz - auxiliary function
 * @x: integer
 * @y: integer
 *
 * Return: root, -1 not
 */
int calculate_raiz(int x, int y)
{
	int raiz = y * y;

	if (raiz > x)
	{
		return (-1);
	}
	if (raiz == x)
	{
		return (y);
	}

	return (calculate_raiz(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: root, -1 not
 */
int _sqrt_recursion(int n)
{
	return (calculate_raiz(n, 1));
}
