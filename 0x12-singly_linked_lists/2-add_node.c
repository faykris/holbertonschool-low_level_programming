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


	if (head == NULL)
	{
		return (NULL);
	}
	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}

	add->str = strdup(str);
	add->len = strlen(str);
	if (add->len == 0)
	{
		return (NULL);
	}
	add->next = *head;
	*head = add;

	return (add);
}
