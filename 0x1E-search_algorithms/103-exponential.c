#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 *	exponential search algorithm:
 *
 * @array: pointer to the first element of the array to search
 * @size: no. of elements in the array
 * @low: lower bound of the search range.
 * @high: upper bound of the search range.
 * @value: the value to search for.
 * Return: the index of the value
 *	or -1 indicating the value is not present.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n",
				bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (_binary_search(array, low, high, value));
}
