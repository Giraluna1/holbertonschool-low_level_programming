#include "function_pointers.h"
/**
 * array_iterator - execute a funtion given
 * @array: array of elements
 * @size: size of array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != 0 && size > 0 && array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

