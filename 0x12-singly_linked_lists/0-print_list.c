#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h - lis_t cons values
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", list->len, list->str);
		list = list->next;
		i++;
	}

	return (i);
}
