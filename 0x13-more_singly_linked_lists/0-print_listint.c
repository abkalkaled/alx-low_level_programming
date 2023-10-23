#include "list.h"
/**
 * print_listint - function to print all elements of list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		prinf("%d\n", h->n);
		h->next = h;
	}
	return (nodes);
}
