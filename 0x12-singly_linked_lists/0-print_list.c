#include "lists.h"
#include <stdio.h>

/**
 * print_list - function prints all the elements of a list_t list.
 * @h: pointer to the head of the linkedlist
 * if 'str' is NULL print [0] (nil)
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		printf("[%d] %s\n", head->len, head->str != NULL ? head->str : "(nil)");
		head = head->next;
		num++;
	}
	return (num);
}
