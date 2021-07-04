#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head structure address
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new, *tmp = NULL;

	tmp = head;
	while (tmp)
	{
		new = tmp->next;
		free(tmp);
		tmp = new;
	}
}
