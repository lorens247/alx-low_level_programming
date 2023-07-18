#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: pointer to the first node where value is located,
 *	or NULL if value is not present or if the list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express;
	size_t idx;

	if (list == NULL)
		return (NULL);

	express = list->express;
	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				express->index, express->n);
		if (express->n >= value)
			break;
		list = express;
		express = express->express;
	}

	if (!express)
	{
		for (idx = list->index; list->next; list = list->next, ++idx)
			continue;
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, idx);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, express->index);
	}

	while (list && list->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}