#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int t, count = 0;
	unsigned long int current;

	for (t = 63; t >= 0; t--)
	{
		current = n >> t;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
