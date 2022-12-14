#include "lists.h"

/**
 * list_len - prints length of list_t linked list
 * @h: linked list
 * Return: number of nodes/elements (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;/*Counter*/

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
