# include "lists.h"

/**
 * print_list - prints all the elements of list
 * @h: the list_t list
 * Return: the amouint of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t num = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		num++;
		p = p->next;
	}
	return (num);
}
