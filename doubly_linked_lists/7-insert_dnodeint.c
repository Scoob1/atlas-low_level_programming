#include "lists.h"
/**
 *insert_dnodeint_at_index-func that inserts a new node at a given position.
 *@h: a pointer to the head
 *@idx: the index where the new node should be inserted
 *@n: integer value to be added as the data of the new node
 *Return: the address of the new element
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *present = *h;
	dlistint_t *new_node;
	unsigned int count = 0;

	while (present != NULL && count < idx - 1)
{
	/* move to the node before the specified index */
	present = present->next;
	count++; }
	if (present == NULL && idx != 0)
	/* if the node at (idx - 1) doesnt exist and idx is not 0, return NULL) */
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	/* return NULL if malloc failed */
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
{
	/* inserting at the beginning of the list */
	new_node->next = *h;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node; }
	else
{
	/* inserting at the middle or end of the list */
	new_node->next = present->next;
	if (present->next != NULL)
		present->next->prev = new_node;
	present->next = new_node;
	new_node->prev = present; }
	return (new_node);
}
