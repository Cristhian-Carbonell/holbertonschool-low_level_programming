#include "holberton.h"

void move_int(char *r, int size, char fill);

/**
 * infinite_add - function that adds two numbers.
 * @n1: one number
 * @n2: two number
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Return: a pointer to the result,
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int temp = size_r;
	int length1 = 0, length2 = 0, result, sum = 0;

	while (n1[length1] != '\0')
		length1++;
	while (n2[length2] != '\0')
		length2++;
	if (length1 > size_r - 2 || length2 > size_r - 2)
		return (0);
	length1--, length2--;

	while (size_r >= 0)
	{
		if (size_r == temp)
		{
			r[size_r--] = '\0';
			continue;
		}
		if (length1 < 0 && length2 < 0 && sum == 0)
		{
			r[size_r--] = 100;
			continue;
		}
		else if (length1 < 0 && length2 < 0 && sum != 0)
			result = sum;
		else if (length1 < 0)
			result = n2[length2] + sum - '0';
		else if (length2 < 0)
			result = n1[length1] + sum - '0';
		else
			result = (n1[length1] - '0') + (n2[length2] - '0') + sum;
		sum = 0;
		if (result > 9)
		{
			sum = 1;
			result -= 10;
		}
		length1--, length2--;
		r[size_r--] = result + '0';
	}
	move_int(r, temp, 100);
	return (r);
}

/**
 * move_int - moves integer from end of str to beginning
 * @r: string to change
 * @size: size of string including null byte
 * @fill: character used to fill string that isn't part being moved
 */
void move_int(char *r, int size, char fill)
{
	int i = 0, buffer = 0;

	while (i < size)
	{
		if (r[i] != fill)
		{
			r[buffer++] = r[i];
			r[i] = '\0';
		}
		else
			r[i] = '\0';
		i++;
	}
}
