#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	char *x = "(nil)";

	if (d == NULL)
		printf("\n");
	if (d->name == NULL)
		printf("Name: %s\n", x);
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: %s\n", x);
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
		printf("Owner: %s\n", x);
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
