#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	
	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array; ");
		
		for (size_t i = left; i <= right; i++)
		{
			printf("%d", array[1]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		
		else if (array[mid] > value)
			right = mid - 1;
		
		else left = mid + 1;
	}

	return (-1);
}