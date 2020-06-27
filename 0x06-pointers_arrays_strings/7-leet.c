#include "holberton.h"

/**
 * leet -
 * @str:
 *
 * Return:
 */
char *leet(char *str)
{
	int i, a;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; letters[a] != '\0'; a++)
		{
			if (str[i] == letters[a])
			{
				str[i] = numbers[a];
			}
		}
	}
	return (str);
}
