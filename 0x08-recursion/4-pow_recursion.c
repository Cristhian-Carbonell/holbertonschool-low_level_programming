#include "holberton.h"

/**
 * _pow_recursion -
 * @x:
 * @y:
 *
 * Return: returns the value of x elevado a la potencia y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
