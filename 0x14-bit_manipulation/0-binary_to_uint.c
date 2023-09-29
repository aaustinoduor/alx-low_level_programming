#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: String containing the binary number
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (int k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[k] - '0');
	}

	return (dec_val);
}
