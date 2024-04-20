#include "lists.h"
/**
 *sum_dlistint-returns the sum of all the data (n) of a dlistint_t linked list
 *@head: a pointer to the head
 *Return: return 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	/* initialize a variable to store the sum */
	int sum = 0;

	while (head != NULL)
{
	/* add the current nodes value to the sum */
	sum += head->n;
	/* move to the next node */
	head = head->next;
}
	/* returns the sum */
	return (sum);
}
