#include "lists.h"

/**
 * pop_listint - cfunction that prints all the elements of a listint_t list.
 * @head: struct list pointer.
 *
 * Return: a size_t value
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int num = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		num = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (num);
	}
}
