#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @p: The struct dog to be printed.
 */
void print_dog(struct dog *p)
{
	if (p == NULL)
		return;

	if (p->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", p->name);

	if (p->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", p->age);

	if (p->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", p->owner);
}
