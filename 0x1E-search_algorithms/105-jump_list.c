#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted singly linked list of integers
 *             using the Jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 *         or NULL if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_step;
	listint_t *block, *prev_block;

	if (list == NULL)
		return (NULL);  /* List is NULL, return NULL */

	step = sqrt(size);
	block = list;
	prev_block = NULL;

	while (block != NULL && block->n < value)
	{
		prev_block = block;
		prev_step = step;
		step *= 2;

		printf("Value checked at index [%lu] = [%d]\n", block->index, block->n);

		while (block->next != NULL && block->index < step)
			block = block->next;

		if (block == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev_block->index, block->index);
	block = prev_block;

	while (block != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", block->index, block->n);

		if (block->n == value)
			return (block);

		block = block->next;
	}

	return (NULL);  /* Value not found, return NULL */
}
