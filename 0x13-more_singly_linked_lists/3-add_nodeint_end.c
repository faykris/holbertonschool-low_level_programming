#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 *					of a listint_t list.
 * @head: Address head struct
 * @n: integer value.
 *
 * Return: a size_t value.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = malloc(sizeof(listint_t));
		if (!tmp)
		{
			return (NULL);
		}
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;

		return (new);

	}
}
