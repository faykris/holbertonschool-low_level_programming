#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: address node head
 * @str: string value to add
 *
 * Return: added address new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int i = 0;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	if (i == 0)
	{
		return (NULL);
	}

	add->str = strdup(str);
	add->len = i;
	add->next = *head;
	*head = add;

	return (add);
}
