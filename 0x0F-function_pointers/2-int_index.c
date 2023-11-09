#include "function_pointers.h"

/**
 * int_index - Searches element in array and returns its index, else -1.
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a comparison function.
 *
 * Return: Index of the found element or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
