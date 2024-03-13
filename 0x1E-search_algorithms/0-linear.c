#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *                 of integers using linear search.
 * @array: pointer to the first element of the array to search.
 * @size:  number of elements in the array.
 * @value: value to search for.
 *
 * Return: if the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	/* check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* iterate over each element of the array */
	for (j = 0; j < size; j++)
	{
		/* print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);

		/* if the value is found */
		if (array[j] == value)

			/* return the index of the value */
			return (j);
	}

	/* value not found, return -1 */
	return (-1);
}
