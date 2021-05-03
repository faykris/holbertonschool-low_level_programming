#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: head structure address
 * @index: index position to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *pre;
	unsigned int i = 0;

	if (!head)
	{
		return (-1);
	}

	del = *head;
	pre = *head;

	while (i < index)
	{
		pre = del;
		del = del->next;
		if (del == NULL)
			break;
		i++;
	}

	if (del != NULL)
	{
		if (del == *head)
		{
			*head = (*head)->next;
		}
		pre->next = del->next;
		del->next = NULL;
		free(del);
		return (1);
	}
	else
	{
		return (-1);
	}
}
