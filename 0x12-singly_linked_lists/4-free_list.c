#include <stdlib.h>
#include "lists.h"

/**
  *free_list - free list_t
  *@head: pointer to the head
  */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
