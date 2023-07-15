#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where value is located,
 *         or -1 if value is not present in the array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);  // Array is NULL, return -1

	if (array[0] == value)
		return (0);  // Value found at the beginning, return 0

	size_t bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	size_t left = bound / 2;
	size_t right = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		size_t half = (left + right) / 2;

		if (array[half] == value)
			return (half);  // Value found, return the index

		if (array[half] < value)
			left = half + 1;
		else
			right = half - 1;
	}

	return (-1);  // Value not found, return -1
}
