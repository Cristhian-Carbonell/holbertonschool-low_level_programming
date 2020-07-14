#include "dog.h"

/**
 * new_dog - that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owne: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1;
	int len2;
	dog_t *ptr1;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	ptr1 = malloc(sizeof(dog_t));
	if (ptr1 == NULL)
		return (NULL);
	ptr1->name = malloc(sizeof(char) * (len1 + 1));
	if (ptr1->name == NULL)
	{
		free(ptr1);
		return (NULL);
	}
	else
		_strcpy(ptr1->name, name);
	ptr1->age = age;
	ptr1->owner = malloc(sizeof(char) * (len2 + 1));
	if (ptr1->owner == NULL)
	{
		free(ptr1->name);
		free(ptr1);
		return (NULL);
	}
	else
		_strcpy(ptr1->owner, owner);
	return (ptr1);
}

/**
 *_strlen - return length of string
 * @s: string input
 *
 * Return: Length of string *s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copy string from source to destination including
 * @dest: string input
 * @src: string inpu
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	b = 0;
	while (src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}
