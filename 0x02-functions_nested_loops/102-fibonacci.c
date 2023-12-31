#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0.
 */
int main(void)
{
	long int x, y, z, next;

	y = 1;

	z = 2;

	for (x = 1; x <= 50; ++x)
	{
		if (y != 20365011074)
		{
			printf("%ld, ", y);
		} else
		{
			printf("%ld\n", y);
		}
		next = y + z;
		y = z;
		z = next;
	}

	return (0);
}
