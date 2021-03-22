#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Address head struct.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *new, *tmp = NULL;

	tmp = head;
	while (tmp)
	{
		new = tmp->next;
		free(tmp);
		tmp = new;
	}
}
