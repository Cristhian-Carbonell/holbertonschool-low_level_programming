#include "holberton.h"

/**
 * print_buffer - function that print a buffer
 * @b: pointer
 * @size: bytes of the buffer pointe by b
 */
void print_buffer(char *b, int size)
{
	int byte = 0, i;

	while (byte < size)
	{
		printf("%08x: ", byte);

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				printf(" ");
			else
				printf("%02x", b[i + byte]);
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				break;
			else if (b[i + byte] >= 31 && b[i + byte] <= 126)
				printf("%c", b[i + byte]);
			else
				printf(".");
		}

		if (byte >= size)
			continue;
		printf("\n");
		byte += 10;
	}

	if (size >= 0)
		printf("\n");
}
