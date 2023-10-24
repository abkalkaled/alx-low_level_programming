#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list, handling loops safely.
 * @h: A pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *next;

    if (h == NULL || *h == NULL)
        return 0;

    current = *h;
    while (current)
    {
        count++;
        next = current->next;

        if (next == current)
        {
            free(current);
            *h = NULL;
            return count;
        }
        current->next = NULL;
        free(current);
        current = next;
    }
    *h = NULL;
    return count;
}

