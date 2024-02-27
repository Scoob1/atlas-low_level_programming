#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @p: The dog to be freed.
 */
void free_dog(dog_t *p)
{
	if (p == NULL)
		return;

	free(p->owner);
	free(p->name);
	free(p);
}
