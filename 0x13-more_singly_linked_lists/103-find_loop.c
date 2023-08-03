#include "lists.h"

/**
 * find_listint_loop - Finds the loop in linked list.
 * @head: A pointer to the head
 * Return: NULL/ address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
	{
		return (NULL);
	}
	slow = fast = head;
	while (fast->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
