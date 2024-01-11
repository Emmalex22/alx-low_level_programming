#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *present = head;
	dlistint_t *next_node;

	while (present != NULL)
	{
		next_node = present->next;
		free(present);
		present = next_node;
	}
}
