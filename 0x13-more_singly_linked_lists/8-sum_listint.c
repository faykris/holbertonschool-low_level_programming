#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 *				a listint_t linked list
 * @head: struct list pointer.
 *
 * Return: sum of n nodes values, if nodes is empty return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
