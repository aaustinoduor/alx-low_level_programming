#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0 (success)
 */

void rev_string(char *n)
{
	int j = 0;
	int k = 0;
	char temp;

	while (*(n + j) != '\0')
	{
		j++;
	}
	j--;

	for (k = 0; k < j; k++, j--)
	{
		temp = *(n + k);
		*(n + k) = *(n + j);
		*(n + j) = temp;
	}
}

/**
 * infinite_add - add two numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer capacity
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, j = 0, k = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + j) != '\0')
		j++;
	while (*(n2 + k) != '\0')
		k++;
	j--;
	k--;
	if (k >= size_r || j >= size_r)
		return (0);
	while (k >= 0 || j >= 0 || overflow == 1)
	{
		if (j < 0)
			val1 = 0;
		else
			val1 = *(n1 + j) - '0';
		if (k < 0)
			val2 = 0;
		else
			val2 = *(n2 + k) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		k--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
