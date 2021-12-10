#include "lists.h"

/**
 * dlistint_len - count the numbers of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_nodes;

	for (nbr_nodes = 0; h != NULL; nbr_nodes++)
		h = h->next;
	return (nbr_nodes);
}
