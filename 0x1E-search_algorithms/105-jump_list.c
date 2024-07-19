#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of
 * integers using jump search algorithm.
 * @list: Pointer to the head of the list
 * @size: number of prevs in the list
 * @value: The value to search for.
 *
 * Return: Pointer to the first prev where value is located,
 * or NULL if value is not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *prev, *cur;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (prev = cur = list; cur->index + 1 < size && cur->n < value;)
	{
		prev = cur;
		for (step += step_size; cur->index < step; cur = cur->next)
		{
			if (cur->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, cur->index);

	for (; prev->index < cur->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
