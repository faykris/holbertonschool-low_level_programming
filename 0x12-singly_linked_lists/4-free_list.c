#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: address node head
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *add, *tmp = NULL;

	tmp = head;
	while (tmp)
	{
		add = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = add;
	}
}
