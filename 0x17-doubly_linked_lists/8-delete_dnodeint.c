#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes node at index
 * @head: pointer to head
 * @index: of node strating from 0
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(current);
	return (1);
	}
	while (index > 0 && current != NULL)
	{
		current = current->next;
		index--;
	}
	if (index > 0 || current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
