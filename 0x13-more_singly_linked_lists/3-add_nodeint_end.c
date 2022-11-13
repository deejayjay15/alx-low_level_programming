#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	/*x - new node*/
	listint_t *x, *tmp;

	x = malloc(sizeof(listint_t)); /* make new node and set values */
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL) /*for an empty list, new node is head node */
		*head = x;
	else
	{
		tmp = *head; /* set tmp ptr to iterate w/o moving head ptr */

		while (tmp->next != NULL) /* iterate till last node */
			tmp = tmp->next;
		tmp->next = x; /* link last node to new node */
	}

	return (x);
}
