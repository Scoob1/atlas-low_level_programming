#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a doubly linked list
 * @h: Pointer to the head node of the list
 *
 * Return: the num of elements in the list
 * if @h is NULL, return 0.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
