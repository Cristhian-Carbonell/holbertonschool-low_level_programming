#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
