#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: address node head
 * @str: string value to add
 *
 * Return: added address new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *tmp = NULL;
	int i = 0;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	add->str = strdup(str);
	add->len = i;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	else
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = add;

		return (add);
	}
}
