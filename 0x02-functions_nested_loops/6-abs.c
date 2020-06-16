#include "holberton.h"

/**
 * Write a function that computes the absolute value of an integer.
 * @num: integer to be computed absolute value
 *
 * Return: absolute to be computed absolute value
 */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
