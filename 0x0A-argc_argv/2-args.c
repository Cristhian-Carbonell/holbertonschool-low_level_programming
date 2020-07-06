#include <stdio.h>

/**
 * main - all arguments should be printed
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
