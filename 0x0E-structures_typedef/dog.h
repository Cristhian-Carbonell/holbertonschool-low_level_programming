#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * struct dog - characteristic of a dog
 * @name: dog's name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: know the characteristics of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
