#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 *         or NULL if value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *exp;

	if (list == NULL)
		return (NULL);

	exp = list;
	while (exp != NULL && exp->n < value)
	{
		list = exp;
		if (exp->exp)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       exp->exp->index, exp->exp->n);
			exp = exp->exp;
		}
		else
		{
			while (exp->next)
				exp = exp->next;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       list->index, exp->index);

	while (list != NULL && list->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
