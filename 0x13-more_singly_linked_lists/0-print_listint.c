#include "lists.h"

/**
 * print_listint - cfunction that prints all the elements of a listint_t list.
 * @h: struct list pointer.
 *
 * Return: a size_t value
 */

size_t print_listint(const listint_t *h)
{
	unsigned long i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
