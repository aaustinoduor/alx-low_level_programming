#include <stdio.h>

/**
 * Main - Entry point
 *
 *Description: Revers lowercase alphabets
 * Return: Always 0 (succes)
 *
 */

int main(void)
{

	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
