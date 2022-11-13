#include "lists.h"

/**
 * free_listint2 - frees a linked list, and sets head to NULL
 * @head: linked list
 * Return: None, Void function
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL) /* no ptr */
		return;

	while (*head != NULL) /* ptr keep track of head node and free */
	{
		ptr = *head;
		*head = ptr->next; /* move to next node while ptr frees prior */
		free(ptr);
	}

}
