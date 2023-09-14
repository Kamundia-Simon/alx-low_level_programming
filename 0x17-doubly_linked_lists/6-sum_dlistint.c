#include "lists.h"

/**
 * sum_dlistint - Sums of data in list
 * @head: The head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
