#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search -
 * @array:
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

