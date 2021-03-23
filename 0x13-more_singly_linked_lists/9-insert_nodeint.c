#include "lists.h"

/**
 * insert_nodeint_at_index - function that returns the sum of all the data (n)
 *				of a listint_t linked list
 * @head: struct list pointer.
 * @idx: number position to insert node.
 * @n: number value to add the inserted node.
 *
 * Return: sum of n nodes values, if nodes is empty return 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 1;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;

	while (i < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			break;
		i++;
	}
	if (idx == 0)
	{	new->next = tmp;
		*head = new;
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
