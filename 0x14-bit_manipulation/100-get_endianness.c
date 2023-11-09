#include "main.h"

/**
 * get_endianness - Checks if a machine is little or big endian
 * Return: 1 for little,0 for big
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
