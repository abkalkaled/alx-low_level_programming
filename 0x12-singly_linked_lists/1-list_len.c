#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: the list_t list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *p;
	size_t n = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p != NULL)
	{
		n++;
		p = p->next;
	}
	return (n);
}
