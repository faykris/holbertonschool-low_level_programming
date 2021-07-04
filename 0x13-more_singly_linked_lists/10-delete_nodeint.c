#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 *							of a listint_t linked list
 * @head: struct list pointer.
 * @index: number position to delete node.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *pre;
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
