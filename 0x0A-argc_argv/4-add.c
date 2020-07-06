#include <stdio.h>
#include <stdlib.h>

/**
 * main - that adds positive numbers
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y;
	char *ptr;
	long suma;

	if (argc > 1)
	{
		for (x = 1; argv[x]; x++)
		{
			y = strtol(argv[x], &ptr, 10);
			suma += y;

			if (ptr)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%ld\n", suma);
	}

	return (0);
}
