#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: If the value is not present or the array is NULL, -1 is returned.
 * otherwise, the index of the value is returned
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
