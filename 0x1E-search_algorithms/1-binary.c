#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * @array: Array is a pointer to the first element of the array to search in
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t middle = 0;
	size_t i = 0;
	size_t left = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
