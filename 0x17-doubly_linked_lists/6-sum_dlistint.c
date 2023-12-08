#include "lists.h"
#include <stddef.h>
/**
 * sum_dlistint - function to sum all data of the doubly linked list
 * @head: pointer to the head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
