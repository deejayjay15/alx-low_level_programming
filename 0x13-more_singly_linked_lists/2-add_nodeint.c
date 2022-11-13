#include "lists.h"
/**
 * add_nodeint - adds node at beginning of listint_t list
 * @head: hesd element of listint_t
 * @n: data to add to new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *x;/*New node*/

	x = malloc(sizeof(listint_t)); /* create new node */
	if (x == NULL)
		return (NULL);

	x->n = n; /* set values */

	x->next = *head; /* first link new node to point to first node */
	*head = x; /* then switch list pointer to point to new node */

	return (x);
}
