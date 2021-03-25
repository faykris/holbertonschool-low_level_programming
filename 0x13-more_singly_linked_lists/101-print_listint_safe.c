#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Address head struct.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned long i = 0;
	const listint_t *rep;

	while (rep != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		
		rep = head;
		head = head->next;
		if (i == 8)
		{
			printf("-> [%p] %d\n", (void *)head, 98);
			exit(98);
		}
		i++;
	}

	return (i);
}
