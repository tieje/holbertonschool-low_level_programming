#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
