#include "search_algos.h"

/**
 * jump_search -  function that searches for a value in a
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * @array: Array is a pointer to the first element of the array to search in
 */
int jump_search(int *array, size_t size, int value)
{
	size_t high = 0, i = 0;
	size_t low = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			high = high + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       low, array[low]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low, high);
		for (i = low; i <= high; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
