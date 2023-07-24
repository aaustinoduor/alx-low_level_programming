#include "main.h"
/**
 * puts_half - function that prints half of string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int b, n, longj;

	longj = 0;

	for (b = 0; str[b] != '\0'; b++)
		longj++;

	n = (longj / 2);

	if ((longj % 2) == 1)
		n = ((longj + 1) / 2);

	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
