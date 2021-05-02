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
	dlistint_t *new, *tmp;
	unsigned int i = 1;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *h;

	while (i < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			break;
		i++;
	}
	if (idx == 0)
	{	new->next = tmp;
		*h = new;
	}
	else if (tmp != NULL)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
		return (NULL);

	return (new);
}
