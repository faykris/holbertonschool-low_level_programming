#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 *				linked list_t list
 * @h: lis_t cons values
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
