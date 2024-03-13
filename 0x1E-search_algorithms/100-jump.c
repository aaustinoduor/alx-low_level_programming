#include "search_algos.h"
/**
  * jump_search - searches for a value in a sorted array
  *               of integers using jump search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: the value to search for.
  *
  * Return: if the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t k, jump, step;

	/* check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* calculate the jump step size */
	step = sqrt(size);

	/* perform the jump search */
	for (k = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* store the previous jump position */
		k = jump;

		/* update the jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jump);

	/* adjust the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* perform a linear search within the identified range */
	for (; k < jump && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	/* check if the value is found and return the corresponding index */
	return (array[k] == value ? (int)k : -1);
}
