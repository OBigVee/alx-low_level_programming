#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - function adds a new node at the end of a 'list_t' list
 * @head: pointer to head of "list_t" list
 * @str: data
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	int str_len;

	temp_node = *head;

	while (temp_node && temp_node->next != NULL)
		temp_node = temp_node->next;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = NULL;

	if (temp_node)
		temp_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
