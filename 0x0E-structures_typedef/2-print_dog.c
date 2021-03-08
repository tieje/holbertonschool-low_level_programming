#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	char *x = "(nil)";

	if (d->name == NULL && d->owner == NULL)
		printf("\n");
	else
	{
		if (d->name == NULL)
			printf("Name: %s\n", x);
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", x);
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
