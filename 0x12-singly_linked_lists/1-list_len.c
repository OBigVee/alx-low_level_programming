#include "lists.h"
#include <stdio.h>

/**
 * list_len - function returns the number elements in a linked list_t list.
 * @h: pointer to the head of the linkedlist
 * Return: number of elements in linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		head = head->next;
		num++;
	}
	return (num);
}
