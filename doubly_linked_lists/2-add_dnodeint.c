#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of dlistint_t list
 * @head: Pointer to a pointer to the head node of the list
 * @n: integer to add to the new node.
 *
 * Return: address of the new element, or NULL if it  fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
