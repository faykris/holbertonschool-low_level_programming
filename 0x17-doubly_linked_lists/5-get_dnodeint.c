#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head structure address
 * @index: index to return node
 *
 * Return: nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, j = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->next != NULL)
	{
		head = head->next;
		i++;
	}
	if (index > i)
	{
		return (NULL);
	}
	while (j != (i - index))
	{
		j++;
		head = head->prev;
	}
	return (head);
}