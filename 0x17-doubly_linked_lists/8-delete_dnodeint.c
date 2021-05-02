#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head structure address
 * @idx: index position to be added
 * @n: number to be added on the new idex
 *
 * Return: the address of the new node, or NULL if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *era;
	unsigned int i = 0, j = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (index > i - 1)
	{
		return (-1);
	}
	else if (index == 0)
	{
		era = *head;
		free(era);
		return (1);
	}
	while (tmp->prev != NULL)
	{
		if (j == (i - index))
		{
			
			era = tmp;
			tmp = tmp->prev;
			free(era);

		}
		tmp = tmp->prev;
	}
	return (1);
}
