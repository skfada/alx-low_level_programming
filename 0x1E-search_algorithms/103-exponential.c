#include "search_algos.h"
/**
 * b_search - function that searches for a value in a sorted
 * @low: Left index in the array
 * @high: right index in the array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * @array: Array is a pointer to the first element of the array to search in
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t right = high - 1;
	size_t middle = 0;
	size_t i = 0;
	size_t left = low;

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
/**
 * exponential_search - Function that searches for a value in a sorted array
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * @array: Array is a pointer to the first element of the array to search in
 */
int exponential_search(int *array, size_t size, int value)
{
	int result;
	size_t bound = 1, min = 0;

	if (array != NULL)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		if (bound + 1 < size)
			min = bound + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
		result = b_search(array, bound / 2,  min, value);
		if (result != -1)
			return (result);
	}
	return (-1);
}
