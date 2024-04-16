#include "lists.h"

/**
 * sum_dlistint - returns sum of data of list
 * @head: pointer
 *
 * Return: returns the result
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *time = head;

	while (time != NULL)
	{
		time = time->next;
	}
	return (sum);
}
