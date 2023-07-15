#include "search_algos.h"

/**
 * advanced_binary_recursive - recursively searches for a value in a sorted
 * array of integers using the advanced binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @left: starting index of the subarray
 * @right: ending index of the subarray
 * @value: value to search for
 *
 * Return: the index where value is located,
 *         or -1 if value is not present in the array or if array is NULL
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	if (left <= right)
	{
		size_t half = left + (right - left) / 2;

		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[half] == value)
		{
			if (half == left || array[half - 1] != value)
				return (half);  // Value found, return the index
			else
				return (advanced_binary_recursive(array, left, half, value));
		}

		if (array[half] < value)
			return (advanced_binary_recursive(array, half + 1, right, value));

		return (advanced_binary_recursive(array, left, half - 1, value));
	}

	return (-1);  // Value not found, return -1
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the advanced binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where value is located,
 *         or -1 if value is not present in the array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1;)  // Array is NULL, return -1

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
