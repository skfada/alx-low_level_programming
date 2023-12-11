#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 * @array: input array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%li] = [%i]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
