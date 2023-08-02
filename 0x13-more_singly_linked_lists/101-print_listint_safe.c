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
	const listint_t *s = head;
	const listint_t *f = head;
	size_t node = 0;

	while (s != NULL && f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		node++;
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			s = head;

			while (s != f)
			{
				printf("[%p] %d\n", (void *)s, s->n);
				node++;
				s = s->next;
				f = f->next;
			}

			printf("[%p] %d\n", (void *)s, s->n);

			node++;
			break;
		}
	}

	return (node);
}
