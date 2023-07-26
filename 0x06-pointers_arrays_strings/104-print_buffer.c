#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int j, k, z;

	j = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (j < size)
	{
		k = size - j < 10 ? size - j : 10;
		printf("%08x: ", j);
		for (z = 0; z < 10; z++)
		{
			if (z < k)
				printf("%02x", *(b + j + z));
			else
				printf("  ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < k; z++)
		{
			int c = *(b + j + z);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		j += 10;
	}
}
