#include "lists.h"

/**
 * print_listint - function prints all the elements of a listint_t list
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *current;
	listint_t new_node;
	
	new_node =(listint_t*) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		printf("%d\n",)
		current = current.next;
	}

	current = new_node;
	
}
