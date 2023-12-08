#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node od dlistint
 * @head: head
 * @index: node index from 0
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}

