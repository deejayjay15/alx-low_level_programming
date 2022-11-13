#include "lists.h"

/**
 * listint_len - returns number of elements in listint_t linked list
 * @h: list
 * Return: Number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t _nodes;/*Number of nodes*/

	_nodes = 0;
	while (h != NULL)
	{
		++_nodes;
		h = h->next;
	}

	return (_nodes);
}
