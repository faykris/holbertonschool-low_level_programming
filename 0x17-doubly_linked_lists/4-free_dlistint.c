#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head structure address
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}