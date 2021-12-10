#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes;
	for( nbr_nodes=0; h != NULL; ++nbr_nodes)
	{
		printf( "%d\n", h->n);
		h = h->next;
	}
	return (nbr_nodes);
}

