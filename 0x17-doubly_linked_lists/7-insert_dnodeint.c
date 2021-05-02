#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head structure address
 * @idx: index position to be added
 * @n: number to be added on the new idex
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, j = 0;
	dlistint_t *tmp, *new;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (idx > i + 1)
		return (NULL);
	if (idx == i + 1)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*h == NULL)
		return (new);
	while (tmp != NULL)
	{
		if (j == (i - idx))
		{
			new->prev = tmp->prev;
			new->next = tmp;
			tmp = new;
			tmp->prev->next = tmp;
			tmp->next->prev = tmp;
		}
		tmp = tmp->prev;
		j++;
	}
	return (new);
}
