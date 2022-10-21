#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function adds a new_node node at the begining of a list_t list.
 * @head: pointer to head
 * @str: data
 * Return: address of the new_node element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);

	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
