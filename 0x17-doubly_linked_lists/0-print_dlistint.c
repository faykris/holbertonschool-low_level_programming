#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head node
 *
 * Return: number of nodes, 0 its fails
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		if (h->prev == NULL && i != 0)
			break;
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			h = h->prev;
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		i++;
	}
	return (i);
}