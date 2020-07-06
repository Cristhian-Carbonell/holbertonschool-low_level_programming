#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product =  atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
