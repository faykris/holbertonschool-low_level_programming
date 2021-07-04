#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 *				linked listint_t list.
 * @h: struct list pointer.
 *
 * Return: a size_t value.
 */

size_t listint_len(const listint_t *h)
{
	unsigned long i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
