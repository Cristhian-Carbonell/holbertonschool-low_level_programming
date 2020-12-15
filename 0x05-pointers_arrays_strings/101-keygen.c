#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that generates random valid passwords for the program 101-crackme.
 *
 * Return: 0
 */
int main(void)
{
	char passwd[84];
	int i = 0, sum = 0, temp1, temp2;

	srand(time(0));
	while (sum < 2772)
	{
		passwd[i] = 33 + rand() % 94;
		sum += passwd[i++];
	}
	passwd[i] = '\0';
	if (sum != 2772)
	{
		temp1 = (sum - 2772) / 2;
		temp2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			temp1++;
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + temp1))
			{
				passwd[i] -= temp1;
				break;
			}
		}
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + temp2))
			{
				passwd[i] -= temp2;
				break;
			}
		}
	}
	printf("%s", passwd);

	return (0);
}
