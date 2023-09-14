#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of print_dlistint
 * @h: pointer to head of the doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
