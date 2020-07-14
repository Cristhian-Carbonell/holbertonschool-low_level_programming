#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: struct
 * @name: dog's name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	if (ptr)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
