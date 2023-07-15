#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * 
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size -1;

	if (array == NULL)
		return (-1);
		
	while (left <= right)
    {
        size_t half = (left + right) / 2;
        
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d, ", array[i]);
            if (i != right)
                printf(", ");
        }
        printf("\n");
        
        if (array[half] == value)
            return (half);
        else if (array[half] < value)
            left = half + 1;
        else
            right = half - 1;
    }
    
    return (-1);
}