#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @p: The dog to be initialized.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
