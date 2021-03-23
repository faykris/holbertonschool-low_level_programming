#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: Address head struct.
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *cur;

	if (*head != NULL)
	{
		pre = *head;
		cur = (*head)->next;
		*head = (*head)->next;

		pre->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			cur->next = pre;

			pre = cur;
			cur = *head;
		}

		*head = pre;

		return (*head);
	}
	return (NULL);
}
