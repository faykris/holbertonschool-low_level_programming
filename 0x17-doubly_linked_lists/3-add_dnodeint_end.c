#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: head structure address
 * @n: number to add in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new;
			new->prev = tmp;
			tmp = tmp->next;
			while (tmp->prev != NULL)
			{
				tmp = tmp->prev;
			}
			break;
		}
		tmp = tmp->next;
	}
	return (tmp);
}
