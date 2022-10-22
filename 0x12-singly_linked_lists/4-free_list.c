#include "lists.h"
#include <stdio.h>

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to head of 'list_t'
 * Return: always 0
 */

void free_list(list_t *head)
{
	list_t *temp_node, *nxt;

	temp_node = head;

	while (temp_node != NULL)
	{
		nxt = temp_node->next;
		free(temp_node->str);
		free(temp_node);
		temp_node = nxt;
	}
}
