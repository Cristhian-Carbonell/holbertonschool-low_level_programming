#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d: dog struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	d->name == NULL ?
		printf("Name: (nil)\n")
		:
		printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	d->owner == NULL ?
		printf("Owner: (nil)\n")
		:
		printf("Owner: %s\n", d->owner);
}
