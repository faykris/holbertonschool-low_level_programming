#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: address node head
 * @str: string value to add
 *
 * Return: added node pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add, *new = NULL;
	int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
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
	if (i == 0)
	{
		add->str = "(nil)";
	}
	add->len = i;
	add->next = *head;
	*head = add;
	add = new;

	free(add);
	return (new);
}
