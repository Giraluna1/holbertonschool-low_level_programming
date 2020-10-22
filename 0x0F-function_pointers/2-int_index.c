#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to the function
 * Return: index o -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 0 || cmp(array[i]) != 0)
			{
				if (cmp(array[i]) == 0)
				i++;
				if (cmp(array[i]) != 0)
				return (i);
			}
			else
				return (-1);
		}
	}
	return (i);
}

