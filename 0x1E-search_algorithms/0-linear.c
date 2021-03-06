#include "search_algos.h"
/**
 * linear_search - This function search for value using Linear serach algorithm
 * @array: pointer to the sorted array
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: The index of the number to serch for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t item;

	if (!array)
		return (-1);
	for (item = 0; item < size; item++)
	{
		printf("Value checked array[%lu] = [%d]\n", item, array[item]);
		if (array[item] == value)
			return (item);
	}
	return (-1);
}
