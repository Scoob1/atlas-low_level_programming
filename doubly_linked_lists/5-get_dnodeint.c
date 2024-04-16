#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the linked list
 * @index: int
 * @head: pointer
 *
 * Return: the result
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *times = head;

	unsigned int list = 0;

	while (times != NULL)
	{
		if (list == index)
			return (times);

		times = times->next;
		list++;
	}
	return (NULL);
}
