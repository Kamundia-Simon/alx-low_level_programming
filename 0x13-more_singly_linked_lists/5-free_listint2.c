#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees list
 *@head: points to head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
