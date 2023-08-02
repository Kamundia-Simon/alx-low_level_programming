#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 *print_listint_safe - prints a list
 *@head: pointer to head
 *Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s;
	const listint_t *f;
	size_t node = 1;

	s = head;
	if (s == 0)
		return (0);
	while (s != 0)
	{
		f = s;
		s = s->next;
		node++;
		printf("[%p] %d\n", (void *)f, f->n);

		if (f <= s)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			break;
		}
	}
	return (node);
}
