#include "lists.h"
/**
 *delete_dnodeint_at_index- deletes the node at index
 *@head: pointer to the head
 *@index: index where the new node should be inserted
 *Return: The addres of the new element
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *present = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
{
	*head = present->next;

	if (present->next)
		present->next->prev = NULL;
	free(present);
	return (1);
}
	while (present != NULL && count < index)
{
	present = present->next;
	count++;
}
	if (present == NULL)
	return (-1);

	if (present->prev != NULL)
	present->prev->next = present->next;

	if (present->next != NULL)
	present->next->prev = present->prev;

	free(present);

	return (1);
}
