#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Aways 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
