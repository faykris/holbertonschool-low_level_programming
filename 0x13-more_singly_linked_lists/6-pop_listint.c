#include "lists.h"

/**
 * print_listint - cfunction that prints all the elements of a listint_t list.
 * @h: struct list pointer.
 *
 * Return: a size_t value
 */

int pop_listint(listint_t **head)
{
	listint_t *toDelete = NULL;
	
		if (*head == NULL)
		{
			return (0);
		}
		else
		{
			toDelete = *head;
			*head = (*head)->next;
			free(toDelete);
			return (1);
		}
}
