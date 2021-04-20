#include "search_algos.h"
/**
 * binary_search - This function search fo a value usin Binary serach algorithm
 * @array: pointer to the sorted array
 * @size: number of elements in array
 * @value: is tehe value to search for
 * Return: The index of the number to serch for
 */

int binary_search(int *array, size_t size, int value)
{
	int value_left = 0, value_mid, item;
	int value_right = size - 1;

	if (value_left > value_right || !array)
		return (-1);

	while (value_left <= value_right)
	{
		printf("Searching in array: ");
		for (item = value_left; item <= value_right; item++)
		{
			printf("%d", array[item]);
			if (item != value_right)
				printf(", ");
			else
				printf("\n");
		}
		value_mid = ((value_left + value_right) / 2);
		if (value == array[value_mid])
		{
			return (value_mid);
		}
		else if (value < array[value_mid])
		{
			value_right = value_mid - 1;
		}
		else
		{
			value_left = value_mid + 1;
		}
	}
	return (-1);
}
